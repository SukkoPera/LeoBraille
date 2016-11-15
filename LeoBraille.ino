#include <PString.h>

#include "ButtonsTM1638.h"

ButtonsTM1638 buttons;

struct KeyboardStatus {
	boolean lastWasSpace;
	boolean nextIsUpperCase;
	boolean nextIsNumber;
};

KeyboardStatus kbStatus = {
	false,
	false,
	false
};

// 6 keys either pressed or not = 64 possible combinations
#include <Keyboard.h>
#include "keycodes.h"


void setup () {
	Serial.begin (9600);
	buttons.begin ();
}

// ms
const unsigned long HOLD_TIME = 80;
const unsigned long REPEAT_DELAY = 700;
const unsigned long REPEAT_INTERVAL = 150;

// Reads and debounces
byte readButtons () {
	static byte oldKeys = 0;
	static unsigned long pressedOn = 0;

	byte ret = 0;

	word allKeys = buttons.read ()
	byte keys = allKeys & 0xFF;
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
byte readButtons2 () {
	static byte oldKeys = 0;
	static unsigned long nextRepeat = 0;

	byte ret = 0;

	byte keys = readButtons ();
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

// http://stackoverflow.com/questions/2602823/in-c-c-whats-the-simplest-way-to-reverse-the-order-of-bits-in-a-byte
byte bitReverse (byte b) {
	b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
	b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
	b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
	return b;
}

char buf[8 + 1] = {'\0'};

void loop () {
	byte keys = readButtons2 ();
	if (keys != 0) {
		keys = bitReverse (keys);

		char c;
		if (keys & (1 << 3)) {
			c = ' ';
		} else {
			byte code = ((keys & 0xE0) >> 2) | (keys & 0x07);
			Serial.print (code, BIN);
			c = (char) pgm_read_byte (&keycodesLetterMode[code]);
		}
		if (c != '\0') {
			byte b;
			if (strlen (buf) == 8) {
				for (b = 0; buf[b + 1] != '\0'; b++) {
					buf[b] = buf[b + 1];
				}
				buf[b] = c;
			} else {
				buf[strlen (buf)] = c;
			}
			panel.setDisplayToString (buf);

			Serial.print ("\t");
			Serial.println (c);
		}
	}
}
