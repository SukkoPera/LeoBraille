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

#ifndef TYPEWRITER_H_INCLUDED
#define TYPEWRITER_H_INCLUDED

class Typewriter {
public:
	// Input can be:
	//     32 - 127     ASCII direct (U+0020 to U+007F) <-- uses layout
	//    128 - 0xC1FF  Unicode direct (U+0080 to U+C1FF) <-- uses layout
	// 0xC200 - 0xDFFF  Unicode UTF8 packed (U+0080 to U+07FF) <-- uses layout
	// 0xE000 - 0xE0FF  Modifier key (bitmap, 8 keys, shift/ctrl/alt/gui)
	// 0xE200 - 0xE2FF  System key (HID usage code, within usage page 1)
	// 0xE400 - 0xE7FF  Media/Consumer key (HID usage code, within usage page 12)
	// 0xF000 - 0xFFFF  Normal key (HID usage code, within usage page 7)
	virtual void write (uint16_t c) = 0;
};

#endif
