/* This file includes code borrowed from the Teensyduino Core Library
 * http://www.pjrc.com/teensy/
 * Copyright (c) 2016 PJRC.COM, LLC.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * 1. The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * 2. If the Software is incorporated into a build system that allows
 * selection among a list of target devices, then similar target
 * devices manufactured by PJRC.COM must be included in the list of
 * target devices and selectable in the same manner.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef LEOWRITER_H_INCLUDED
#define LEOWRITER_H_INCLUDED

#include <Keyboard.h>

#include "Typewriter.h"
#include "keylayouts.h"

class Leowriter: public Typewriter {
private:
	uint8_t keycode_to_modifier(KEYCODE_TYPE keycode) {
		uint8_t modifier=0;

#ifdef SHIFT_MASK
		if (keycode & SHIFT_MASK) modifier |= MODIFIERKEY_SHIFT;
#endif
#ifdef ALTGR_MASK
		if (keycode & ALTGR_MASK) modifier |= MODIFIERKEY_RIGHT_ALT;
#endif
#ifdef RCTRL_MASK
		if (keycode & RCTRL_MASK) modifier |= MODIFIERKEY_RIGHT_CTRL;
#endif

		return modifier;
	}

	uint8_t keycode_to_key(KEYCODE_TYPE keycode) {
		uint8_t key = keycode & 0x3F;
#ifdef KEY_NON_US_100
		if (key == KEY_NON_US_100) key = 100;
#endif
		return key;
	}

	void usb_keyboard_press_key (uint8_t key, uint8_t modifier) {
		int i, send_required = 0;

		if (modifier) {
			Serial.print (F("Sending modifier: 0x"));
			Serial.println (modifier + 0x7f, HEX);

			/* The Keyboard library maps modifiers from 0x80 to 0x87, see
			 * Keyboard.h
			 */
			Keyboard.press (modifier + 0x7f);
		}

		if (key) {
			Serial.print (F("Sending key: "));
			Serial.println (key);

			// The Keyboard library allows sending raw scancodes by adding 136
			Keyboard.press (key + 136);
		}

		Keyboard.releaseAll ();
	}

	KEYCODE_TYPE unicode_to_keycode(uint16_t cpoint) {
		// Unicode code points beyond U+FFFF are not supported
		// technically this input should probably be called UCS-2
		if (cpoint < 32) {
			if (cpoint == 10) return TKEY_ENTER & KEYCODE_MASK;
			if (cpoint == 11) return TKEY_TAB & KEYCODE_MASK;
			return 0;
		}
		if (cpoint < 128) {
			return keycodes_ascii[cpoint - 0x20];
		}
#ifdef ISO_8859_1_A0
		if (cpoint >= 0xA0 && cpoint < 0x100) {
			return keycodes_iso_8859_1[cpoint - 0xA0];
		}
#endif
		//#ifdef UNICODE_20AC
		//if (cpoint == 0x20AC) return UNICODE_20AC & 0x3FFF;
		//#endif
#ifdef KEYCODE_EXTRA00
		if (cpoint == UNICODE_EXTRA00) return (KEYCODE_EXTRA00) & 0x3FFF;
#endif
#ifdef KEYCODE_EXTRA01
		if (cpoint == UNICODE_EXTRA01) return (KEYCODE_EXTRA01) & 0x3FFF;
#endif
#ifdef KEYCODE_EXTRA02
		if (cpoint == UNICODE_EXTRA02) return (KEYCODE_EXTRA02) & 0x3FFF;
#endif
#ifdef KEYCODE_EXTRA03
		if (cpoint == UNICODE_EXTRA03) return (KEYCODE_EXTRA03) & 0x3FFF;
#endif
#ifdef KEYCODE_EXTRA04
		if (cpoint == UNICODE_EXTRA04) return (KEYCODE_EXTRA04) & 0x3FFF;
#endif
#ifdef KEYCODE_EXTRA05
		if (cpoint == UNICODE_EXTRA05) return (KEYCODE_EXTRA05) & 0x3FFF;
#endif
#ifdef KEYCODE_EXTRA06
		if (cpoint == UNICODE_EXTRA06) return (KEYCODE_EXTRA06) & 0x3FFF;
#endif
#ifdef KEYCODE_EXTRA07
		if (cpoint == UNICODE_EXTRA07) return (KEYCODE_EXTRA07) & 0x3FFF;
#endif
#ifdef KEYCODE_EXTRA08
		if (cpoint == UNICODE_EXTRA08) return (KEYCODE_EXTRA08) & 0x3FFF;
#endif
#ifdef KEYCODE_EXTRA09
		if (cpoint == UNICODE_EXTRA09) return (KEYCODE_EXTRA09) & 0x3FFF;
#endif
#ifdef KEYCODE_EXTRA0A
		if (cpoint == UNICODE_EXTRA0A) return (KEYCODE_EXTRA0A) & 0x3FFF;
#endif
		return 0;
	}

public:
	void write (uint16_t n) override {
		uint8_t key, mod, msb, modrestore=0;
		KEYCODE_TYPE keycode;
#ifdef DEADKEYS_MASK
		KEYCODE_TYPE deadkeycode;
#endif

		msb = n >> 8;

		if (msb >= 0xC2) {
			if (msb <= 0xDF) {
				n = (n & 0x3F) | ((uint16_t)(msb & 0x1F) << 6);
			} else if (msb == 0xF0) {
				usb_keyboard_press_key(n, 0);
				return;
			} else if (msb == 0xE0) {
				usb_keyboard_press_key(0, n);
				return;
#ifdef KEYMEDIA_INTERFACE
			} else if (msb == 0xE2) {
				usb_keymedia_press_system_key(n);
				return;
			} else if (msb >= 0xE4 && msb <= 0xE7) {
				usb_keymedia_press_consumer_key(n & 0x3FF);
				return;
#endif
			} else {
				return;
			}
		}

		keycode = unicode_to_keycode(n);
		if (!keycode) return;
#ifdef DEADKEYS_MASK
		deadkeycode = deadkey_to_keycode(keycode);
		if (deadkeycode) {
			modrestore = keyboard_modifier_keys;
			if (modrestore) {
				keyboard_modifier_keys = 0;
				usb_keyboard_send();
			}
			// TODO: test if operating systems recognize
			// deadkey sequences when other keys are held
			mod = keycode_to_modifier(deadkeycode);
			key = keycode_to_key(deadkeycode);
			usb_keyboard_press_key(key, mod);
			usb_keyboard_release_key(key, mod);
		}
#endif
		mod = keycode_to_modifier(keycode);
		key = keycode_to_key(keycode);
		usb_keyboard_press_key(key, mod | modrestore);
	}
};

#endif
