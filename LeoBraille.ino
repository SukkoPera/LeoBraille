/*******************************************************************************
 * This file is part of LeoBraille.                                            *
 *                                                                             *
 * Copyright (C) 2016 by SukkoPera <software@sukkology.net>                    *
 *                                                                             *
 * LeoBraille is free software: you can redistribute it and/or modify          *
 * it under the terms of the GNU General Public License as published by        *
 * the Free Software Foundation, either version 3 of the License, or           *
 * (at your option) any later version.                                         *
 *                                                                             *
 * LeoBraille is distributed in the hope that it will be useful,               *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the               *
 * GNU General Public License for more details.                                *
 *                                                                             *
 * You should have received a copy of the GNU General Public License           *
 * along with LeoBraille. If not, see <http://www.gnu.org/licenses/>.          *
 *******************************************************************************
 *
 * LeoBraille - Customizable Arduino-Based Braille Keyboard
 *
 * Please refer to the GitHub page and wiki for any information:
 * https://github.com/SukkoPera/LeoBraille
 */

/*******************************************************************************
 * INPUT DRIVER SELECTION
 *******************************************************************************
 *
 * LeoBraille supports different input methods, and it's very easy to add new
 * ones (just subclass the Buttons class). Enable only one of the following:
 */

/* TM1638-based board with 8 7-segment displays, 8 leds and 8 buttons: the left-
 * and right-most buttons are the dot keys, the central buttons are space and
 * backspace.
 *
 * This is mainly useful for development, as it was the only board I had with so
 * many buttons when I started this project.
 */
//~ #include "ButtonsTM1638.h"
//~ ButtonsTM1638 buttons;

/* 2x QYF-TM1338 boards, with 8 7-segment displays and a 4x4 button matrix: the
 * bottom row of buttons (S13-S16) behaves the same as the above board.
 * Additionally, backspace is mapped to S12.
 *
 * Again, mainly useful for development with a lot more keys available.
 */
//~ #include "ButtonsQYFTM1638x2.h"
//~ ButtonsQYFTM1638x2 buttons;

/* Grove I2C Touch Sensor by Seeed Studio: the first 6 sensors are the dot keys,
 * then we have Space, Enter and Backspace.
 *
 * This is arguably the only useful target for actual use :), so it's the
 * default.
 */
#include "ButtonsGroveI2CTouch.h"
ButtonsGroveI2CTouch buttons;


/*******************************************************************************
 * OUTPUT DRIVER SELECTION
 *******************************************************************************
 *
 * LeoBraille supports different output methods, and it's very easy to add new
 * ones (just subclass the Typewriter class). Enable only one of the following:
 */

/* Writes character to the serial port.
 *
 * Mainly useful for development and debugging, can be used with any Arduino
 * board.
 */
//~ #include "SerialWriter.h"
//~ SerialWriter writer;

/* Emulates a USB keyboard using an Arduino Leonardo or Due (untested).
 *
 * Again, this is the only useful target for actual use, so it's the default.
 */
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

void loop () {
	word keys = buttons.readButtons2 ();
	if (keys != 0) {
		//~ Serial.print (F("Keys deb+rep = "));
		//~ Serial.println (keys, BIN);

		word c = '\0';
		if (keys & Buttons::K_SPACE) {
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
		} else if (keys & Buttons::K_ENTER) {
			Serial.println (F("Enter"));
			c = TKEY_ENTER;
		} else if (keys & Buttons::K_BACKSPACE) {
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
				} else {
					Serial.println ();
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
