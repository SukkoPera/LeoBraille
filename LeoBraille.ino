//~ #include "ButtonsTM1638.h"
//~ ButtonsTM1638 buttons;

#include "ButtonsGroveI2CTouch.h"
ButtonsGroveI2CTouch buttons;

#include "Leowriter.h"
Leowriter writer;

enum KeyboardMode {
	MD_NORMAL,		/// Normal mode, i.e.: lower-case letters
	MD_UPPERCASE,	/// Upper case letters
	MD_NUMBERS,		/// Numbers
	MD_EXTRA		/// Extra keys
};

struct KeyboardStatus {
	// Keyboard mode
	KeyboardMode mode;

	// True if current non-letter mode shall be kept until the end of the word
	boolean modeLock;

	// True if the last character was whitespace
	boolean lastWasSpace;
};

KeyboardStatus kbStatus = {
	MD_NORMAL,
	false,
	false
};

// 6 keys either pressed or not = 64 possible combinations
#include "keylayouts.h"
#include "keycodes.h"

void setup () {
	Serial.begin (9600);
	while (!Serial) {
		; // wait for serial port to connect. Needed for native USB port only
	}

	Serial.println (F("LeoBraille"));

	buttons.begin ();
}

// ms
const unsigned long HOLD_TIME = 80;
const unsigned long REPEAT_DELAY = 700;
const unsigned long REPEAT_INTERVAL = 150;

// Reads and debounces
word readButtons () {
	static word oldKeys = 0;
	static unsigned long pressedOn = 0;

	word ret = 0;

	word keys = buttons.read ();
	//~ Serial.print (F("Keys = "));
	//~ Serial.println (allKeys, BIN);

	if (keys == oldKeys) {
		if (millis () - pressedOn >= HOLD_TIME) {
			// Same combo hold long enough
			ret = keys;
		} else {
			// Combo hold not yet long enough
		}
	} else {
		// Keys bouncing
		oldKeys = keys;
		pressedOn = millis ();
	}

	return ret;
}

// Reads and repeats
word readButtons2 () {
	static word oldKeys = 0;
	static unsigned long nextRepeat = 0;

	word ret = 0;

	word keys = readButtons ();
	if (keys != oldKeys) {
		// First press of new combo, return it and wait for repeat delay
		oldKeys = keys;
		ret = keys;
		nextRepeat = millis () + REPEAT_DELAY;
	} else if (keys != 0 && millis () >= nextRepeat) {
		// Combo kept pressed, return it and wait for repeat interval
		ret = keys;
		nextRepeat = millis () + REPEAT_INTERVAL;
	}

	return ret;
}

void loop () {
	word keys = readButtons2 ();
	if (keys != 0) {
		//~ Serial.print (F("Keys deb+rep = "));
		//~ Serial.println (keys, BIN);

		word c = '\0';
		if (keys & Buttons::SPACE) {
			Serial.print (F("Space"));
			c = TKEY_SPACE;

			// If in a locked non-normal state, let's go back to normal mode
			if (kbStatus.mode != MD_NORMAL && kbStatus.modeLock) {
				Serial.println (F(" -> Change mode to NORMAL"));
				kbStatus.mode = MD_NORMAL;
				kbStatus.modeLock = false;
			} else {
				Serial.println ();
			}
		} else if (keys & Buttons::ENTER) {
			Serial.println (F("Enter"));
			c = TKEY_ENTER;
		} else if (keys & Buttons::BACKSPACE) {
			Serial.println (F("Backspace"));
			c = TKEY_BACKSPACE;
		} else {
			// Extract lower 6 keys from combo, i.e. make it in range 0-63
			byte code = keys & 0x3F;
			Serial.print (F("combo = "));
			Serial.print (code, BIN);

			// Map combo to ASCII character/modifier/function key
			switch (kbStatus.mode) {
				default:
					// What the heck!?
					kbStatus.mode = MD_NORMAL;
					// Fall through
				case MD_NORMAL:
					c = pgm_read_word (&keycodesLetterMode[code]);
					break;
				case MD_UPPERCASE:
					c = pgm_read_word (&keycodesLetterMode[code]);
					c = toupper (c);
					break;
				case MD_NUMBERS:
					c = pgm_read_word (&keycodesNumberMode[code]);
					break;
				case MD_EXTRA:
					c = pgm_read_word (&keycodesExtraMode[code]);
					break;
			}

			if (c > 0) {
				Serial.print (F(": char = 0x"));
				Serial.print (c, HEX);

				if (c < 128) {
					// Direct ASCII character
					Serial.print (" (");
					Serial.print ((char) c);
					Serial.println (")");
				} else if (c >= 0xEE00 && c <= 0xEEFF) {
					// Mode change
					switch (c) {
						case TKEY_MODE_NUMBERS:
							if (kbStatus.mode != MD_NUMBERS) {
								Serial.println (F(" -> Change mode to NUMBERS"));
								kbStatus.mode = MD_NUMBERS;
								kbStatus.modeLock = false;
							} else if (!kbStatus.modeLock) {
								// Double pressure, keep mode until word (erm, number) end
								Serial.println (F(" -> Lock mode to NUMBERS"));
								kbStatus.modeLock = true;
							} else {
								// Triple pressure, back to normal mode
								Serial.println (F(" -> Change mode to NORMAL"));
								kbStatus.mode = MD_NORMAL;
								kbStatus.modeLock = false;
							}
							break;
						case TKEY_MODE_UPPERCASE:
							if (kbStatus.mode != MD_UPPERCASE) {
								Serial.println (F(" -> Change mode to UPPERCASE"));
								kbStatus.mode = MD_UPPERCASE;
								kbStatus.modeLock = false;
							} else if (!kbStatus.modeLock) {
								// Double pressure, keep mode until word end
								Serial.println (F(" -> Lock mode to UPPERCASE"));
								kbStatus.modeLock = true;
							} else {
								// Triple pressure, back to normal mode
								Serial.println (F(" -> Change mode to NORMAL"));
								kbStatus.mode = MD_NORMAL;
								kbStatus.modeLock = false;
							}
							break;
						default:
							// ???
							break;
					}

					// Nothing to write
					c = '\0';
				}
			} else {
				Serial.println (F(": Unknown"));
			}
		}

		if (c != '\0') {
			writer.write (c);

			// Finally update keyboard status
			if (!kbStatus.modeLock) {
				kbStatus.mode = MD_NORMAL;
			}
			kbStatus.lastWasSpace = isspace (c);
		}
	}
}
