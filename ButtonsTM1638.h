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

#include <TM1638.h>
#include "Buttons.h"

#define START_INTENSITY 0

class ButtonsTM1638: public Buttons {
private:
	// Data, Clock, Strobe, Activate, Intensity (0-7)
	TM1638 panel;

public:
	ButtonsTM1638 (): panel (2, 3, 4, true, START_INTENSITY) {
	}

	void begin () {
		panel.clearDisplay ();
		panel.setDisplayToString ("LBrAILLE");
	}

	word read () override {
		byte keys = panel.getButtons ();
		panel.setLEDs (keys);

		//~ Serial.print (F("Panel keys = "));
		//~ Serial.println (keys, BIN);

		word ret = ((keys & 0xE0) >> 2) | (keys & 0x07);

		// Space
		ret |= ((word) (keys & 0x10)) << 4;

		// Backspace
		ret |= ((word) (keys & 0x08)) << 7;

		//~ Serial.print (F("Panel ret keys = "));
		//~ Serial.println (ret, BIN);

		return ret;
	}
};
