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

#include <TM1638QYF.h>
#include "Buttons.h"

#define START_INTENSITY 0

class ButtonsQYFTM1638x2: public Buttons {
private:
	TM1638QYF panelL;
	TM1638QYF panelR;

public:
	// Data, Clock, Strobe, Activate, Intensity (0-7)
	ButtonsQYFTM1638x2 (): panelL (A5, A4, A3, true, START_INTENSITY),
	                       panelR (A2, A1, A0, true, START_INTENSITY) {
	}

	void begin () {
		panelL.clearDisplay ();
		panelR.clearDisplay ();
		panelL.setDisplayToString ("   LEoBr");
		panelR.setDisplayToString ("AILLE");
	}

	word read () override {
		word keysL = panelL.getButtons ();
		word keysR = panelR.getButtons ();

		//~ static word prevkeysL = 0x00, prevkeysR = 0x00;
		//~ if (keysL != prevkeysL) {
			//~ Serial.print (F("panelL keys = "));
			//~ Serial.println (keysL, BIN);
			//~ prevkeysL = keysL;
		//~ }

		//~ if (keysR != prevkeysR) {
			//~ Serial.print (F("panelR keys = "));
			//~ Serial.println (keysR, BIN);
			//~ prevkeysR = keysR;
		//~ }

		word ret = ((keysL & (1 << 14)) ? Buttons::K_DOT1 : 0) |
		           ((keysL & (1 << 13)) ? Buttons::K_DOT2 : 0) |
		           ((keysL & (1 << 12)) ? Buttons::K_DOT3 : 0) |
		           ((keysR & (1 << 13)) ? Buttons::K_DOT4 : 0) |
		           ((keysR & (1 << 14)) ? Buttons::K_DOT5 : 0) |
		           ((keysR & (1 << 15)) ? Buttons::K_DOT6 : 0)
		           ;

		// Space
		ret |= (keysL & (1 << 15)) ? Buttons::K_SPACE : 0;

		// Enter
		ret |= (keysR & (1 << 12)) ? Buttons::K_ENTER : 0;

		// Backspace
		ret |= (keysL & (1 << 11)) ? Buttons::K_BACKSPACE : 0;

		//~ static word prevAllKeys = 0x00;
		//~ if (ret != prevAllKeys) {
			//~ Serial.print (F("Panels ret keys = "));
			//~ Serial.println (ret, BIN);
			//~ prevAllKeys = ret;
		//~ }

		return ret;
	}
};
