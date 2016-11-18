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
	static const word SPACE = ((word) 1) << 8;
	static const word ENTER = ((word) 1) << 9;
	static const word BACKSPACE = ((word) 1) << 10;

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
