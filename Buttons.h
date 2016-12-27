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

#ifndef BUTTONS_H_INCLUDED
#define BUTTONS_H_INCLUDED

class Buttons {
public:
	enum Keys {
		K_DOT1 = 1 << 0,
		K_DOT2 = 1 << 1,
		K_DOT3 = 1 << 2,
		K_DOT4 = 1 << 3,
		K_DOT5 = 1 << 4,
		K_DOT6 = 1 << 5,
		K_DOT7 = 1 << 6,
		K_DOT8 = 1 << 7,
		K_SPACE = 1 << 8,
		K_ENTER = 1 << 9,
		K_BACKSPACE = 1 << 10
	};

	/* Combo debounce time: The combo will be considered valid only after it has
	 * been stable for this amount of milliseconds
	 */
	static const unsigned long HOLD_TIME = 80;

	/* Combo repeat delay: The combo will repeat after this amount of
	 * milliseconds since the first valid pressure was detected.
	 */
	static const unsigned long REPEAT_DELAY = 700;

	/* Combo repeat interval: When combo repeat starts, multiple pressions will
	 * be reported every this amount of milliseconds.
	 */
	static const unsigned long REPEAT_INTERVAL = 150;

	// Reads and debounces
	virtual word readButtons () {
		static word oldKeys = 0;
		static unsigned long pressedOn = 0;

		word ret = 0;

		word keys = read ();
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
	virtual word readButtons2 () {
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

	/* This must return a 16-bit mask, where the meaning of each bit is the
	 * following:
	 * - 0-7: Character buttons in dot order ('a' == 0x01)
	 * - 8: Space
	 * - 9: Enter
	 * - 10: Backspace
	 * - 11-15: Reserved
	 */
	virtual word read () = 0;
};

#endif
