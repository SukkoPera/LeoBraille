/* This file has been taken almost verbatim from the Teensyduino Core Library
 * http://www.pjrc.com/teensy/
 * Copyright (c) 2013 PJRC.COM, LLC.
 *
 * The only modification here was to replace all KEY_* definitions with TKEI_*
 * in order to avoid name clashes with definitions from the Arduino Keyboard
 * library.
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

#ifndef KEYLAYOUTS_H__
#define KEYLAYOUTS_H__

#include <stdint.h>
#include <avr/pgmspace.h>

#ifdef __cplusplus
extern "C"{
#endif

//#define LAYOUT_US_ENGLISH
//#define LAYOUT_CANADIAN_FRENCH
//#define LAYOUT_CANADIAN_MULTILINGUAL
//#define LAYOUT_DANISH
//#define LAYOUT_FINNISH
//#define LAYOUT_FRENCH
//#define LAYOUT_FRENCH_BELGIAN
//#define LAYOUT_FRENCH_SWISS
//#define LAYOUT_GERMAN
//#define LAYOUT_GERMAN_MAC
//#define LAYOUT_GERMAN_SWISS
//#define LAYOUT_ICELANDIC
//#define LAYOUT_IRISH
#define LAYOUT_ITALIAN
//#define LAYOUT_NORWEGIAN
//#define LAYOUT_PORTUGUESE
//#define LAYOUT_PORTUGUESE_BRAZILIAN
//#define LAYOUT_SPANISH
//#define LAYOUT_SPANISH_LATIN_AMERICA
//#define LAYOUT_SWEDISH
//#define LAYOUT_TURKISH
//#define LAYOUT_UNITED_KINGDOM
//#define LAYOUT_US_INTERNATIONAL



// http://en.wikipedia.org/wiki/Keyboard_layout


#define MODIFIERKEY_CTRL        ( 0x01 | 0xE000 )
#define MODIFIERKEY_SHIFT       ( 0x02 | 0xE000 )
#define MODIFIERKEY_ALT         ( 0x04 | 0xE000 )
#define MODIFIERKEY_GUI         ( 0x08 | 0xE000 )
#define MODIFIERKEY_LEFT_CTRL   ( 0x01 | 0xE000 )
#define MODIFIERKEY_LEFT_SHIFT  ( 0x02 | 0xE000 )
#define MODIFIERKEY_LEFT_ALT    ( 0x04 | 0xE000 )
#define MODIFIERKEY_LEFT_GUI    ( 0x08 | 0xE000 )
#define MODIFIERKEY_RIGHT_CTRL  ( 0x10 | 0xE000 )
#define MODIFIERKEY_RIGHT_SHIFT ( 0x20 | 0xE000 )
#define MODIFIERKEY_RIGHT_ALT   ( 0x40 | 0xE000 )
#define MODIFIERKEY_RIGHT_GUI   ( 0x80 | 0xE000 )

#define TKEY_SYSTEM_POWER_DOWN   ( 0x81 | 0xE200 )
#define TKEY_SYSTEM_SLEEP        ( 0x82 | 0xE200 )
#define TKEY_SYSTEM_WAKE_UP      ( 0x83 | 0xE200 )

#define TKEY_MEDIA_PLAY          ( 0xB0 | 0xE400 )
#define TKEY_MEDIA_PAUSE         ( 0xB1 | 0xE400 )
#define TKEY_MEDIA_RECORD        ( 0xB2 | 0xE400 )
#define TKEY_MEDIA_FAST_FORWARD  ( 0xB3 | 0xE400 )
#define TKEY_MEDIA_REWIND        ( 0xB4 | 0xE400 )
#define TKEY_MEDIA_NEXT_TRACK    ( 0xB5 | 0xE400 )
#define TKEY_MEDIA_PREV_TRACK    ( 0xB6 | 0xE400 )
#define TKEY_MEDIA_STOP          ( 0xB7 | 0xE400 )
#define TKEY_MEDIA_EJECT         ( 0xB8 | 0xE400 )
#define TKEY_MEDIA_RANDOM_PLAY   ( 0xB0 | 0xE400 )
#define TKEY_MEDIA_PLAY_PAUSE    ( 0xCD | 0xE400 )
#define TKEY_MEDIA_PLAY_SKIP     ( 0xCE | 0xE400 )
#define TKEY_MEDIA_MUTE          ( 0xE2 | 0xE400 )
#define TKEY_MEDIA_VOLUME_INC    ( 0xE9 | 0xE400 )
#define TKEY_MEDIA_VOLUME_DEC    ( 0xEA | 0xE400 )

#define TKEY_A                   (   4  | 0xF000 )
#define TKEY_B                   (   5  | 0xF000 )
#define TKEY_C                   (   6  | 0xF000 )
#define TKEY_D                   (   7  | 0xF000 )
#define TKEY_E                   (   8  | 0xF000 )
#define TKEY_F                   (   9  | 0xF000 )
#define TKEY_G                   (  10  | 0xF000 )
#define TKEY_H                   (  11  | 0xF000 )
#define TKEY_I                   (  12  | 0xF000 )
#define TKEY_J                   (  13  | 0xF000 )
#define TKEY_K                   (  14  | 0xF000 )
#define TKEY_L                   (  15  | 0xF000 )
#define TKEY_M                   (  16  | 0xF000 )
#define TKEY_N                   (  17  | 0xF000 )
#define TKEY_O                   (  18  | 0xF000 )
#define TKEY_P                   (  19  | 0xF000 )
#define TKEY_Q                   (  20  | 0xF000 )
#define TKEY_R                   (  21  | 0xF000 )
#define TKEY_S                   (  22  | 0xF000 )
#define TKEY_T                   (  23  | 0xF000 )
#define TKEY_U                   (  24  | 0xF000 )
#define TKEY_V                   (  25  | 0xF000 )
#define TKEY_W                   (  26  | 0xF000 )
#define TKEY_X                   (  27  | 0xF000 )
#define TKEY_Y                   (  28  | 0xF000 )
#define TKEY_Z                   (  29  | 0xF000 )
#define TKEY_1                   (  30  | 0xF000 )
#define TKEY_2                   (  31  | 0xF000 )
#define TKEY_3                   (  32  | 0xF000 )
#define TKEY_4                   (  33  | 0xF000 )
#define TKEY_5                   (  34  | 0xF000 )
#define TKEY_6                   (  35  | 0xF000 )
#define TKEY_7                   (  36  | 0xF000 )
#define TKEY_8                   (  37  | 0xF000 )
#define TKEY_9                   (  38  | 0xF000 )
#define TKEY_0                   (  39  | 0xF000 )
#define TKEY_ENTER               (  40  | 0xF000 )
#define TKEY_ESC                 (  41  | 0xF000 )
#define TKEY_BACKSPACE           (  42  | 0xF000 )
#define TKEY_TAB                 (  43  | 0xF000 )
#define TKEY_SPACE               (  44  | 0xF000 )
#define TKEY_MINUS               (  45  | 0xF000 )
#define TKEY_EQUAL               (  46  | 0xF000 )
#define TKEY_LEFT_BRACE          (  47  | 0xF000 )
#define TKEY_RIGHT_BRACE         (  48  | 0xF000 )
#define TKEY_BACKSLASH           (  49  | 0xF000 )
#define TKEY_NON_US_NUM          (  50  | 0xF000 )
#define TKEY_SEMICOLON           (  51  | 0xF000 )
#define TKEY_QUOTE               (  52  | 0xF000 )
#define TKEY_TILDE               (  53  | 0xF000 )
#define TKEY_COMMA               (  54  | 0xF000 )
#define TKEY_PERIOD              (  55  | 0xF000 )
#define TKEY_SLASH               (  56  | 0xF000 )
#define TKEY_CAPS_LOCK           (  57  | 0xF000 )
#define TKEY_F1                  (  58  | 0xF000 )
#define TKEY_F2                  (  59  | 0xF000 )
#define TKEY_F3                  (  60  | 0xF000 )
#define TKEY_F4                  (  61  | 0xF000 )
#define TKEY_F5                  (  62  | 0xF000 )
#define TKEY_F6                  (  63  | 0xF000 )
#define TKEY_F7                  (  64  | 0xF000 )
#define TKEY_F8                  (  65  | 0xF000 )
#define TKEY_F9                  (  66  | 0xF000 )
#define TKEY_F10                 (  67  | 0xF000 )
#define TKEY_F11                 (  68  | 0xF000 )
#define TKEY_F12                 (  69  | 0xF000 )
#define TKEY_PRINTSCREEN         (  70  | 0xF000 )
#define TKEY_SCROLL_LOCK         (  71  | 0xF000 )
#define TKEY_PAUSE               (  72  | 0xF000 )
#define TKEY_INSERT              (  73  | 0xF000 )
#define TKEY_HOME                (  74  | 0xF000 )
#define TKEY_PAGE_UP             (  75  | 0xF000 )
#define TKEY_DELETE              (  76  | 0xF000 )
#define TKEY_END                 (  77  | 0xF000 )
#define TKEY_PAGE_DOWN           (  78  | 0xF000 )
#define TKEY_RIGHT               (  79  | 0xF000 )
#define TKEY_LEFT                (  80  | 0xF000 )
#define TKEY_DOWN                (  81  | 0xF000 )
#define TKEY_UP                  (  82  | 0xF000 )
#define TKEY_NUM_LOCK            (  83  | 0xF000 )
#define KEYPAD_SLASH            (  84  | 0xF000 )
#define KEYPAD_ASTERIX          (  85  | 0xF000 )
#define KEYPAD_MINUS            (  86  | 0xF000 )
#define KEYPAD_PLUS             (  87  | 0xF000 )
#define KEYPAD_ENTER            (  88  | 0xF000 )
#define KEYPAD_1                (  89  | 0xF000 )
#define KEYPAD_2                (  90  | 0xF000 )
#define KEYPAD_3                (  91  | 0xF000 )
#define KEYPAD_4                (  92  | 0xF000 )
#define KEYPAD_5                (  93  | 0xF000 )
#define KEYPAD_6                (  94  | 0xF000 )
#define KEYPAD_7                (  95  | 0xF000 )
#define KEYPAD_8                (  96  | 0xF000 )
#define KEYPAD_9                (  97  | 0xF000 )
#define KEYPAD_0                (  98  | 0xF000 )
#define KEYPAD_PERIOD           (  99  | 0xF000 )
#define TKEY_NON_US_BS           ( 100  | 0xF000 )
#define TKEY_MENU        	( 101  | 0xF000 )
#define TKEY_F13                 ( 104  | 0xF000 )
#define TKEY_F14                 ( 105  | 0xF000 )
#define TKEY_F15                 ( 106  | 0xF000 )
#define TKEY_F16                 ( 107  | 0xF000 )
#define TKEY_F17                 ( 108  | 0xF000 )
#define TKEY_F18                 ( 109  | 0xF000 )
#define TKEY_F19                 ( 110  | 0xF000 )
#define TKEY_F20                 ( 111  | 0xF000 )
#define TKEY_F21                 ( 112  | 0xF000 )
#define TKEY_F22                 ( 113  | 0xF000 )
#define TKEY_F23                 ( 114  | 0xF000 )
#define TKEY_F24                 ( 115  | 0xF000 )

// for compatibility with Leonardo's slightly different names
#define TKEY_UP_ARROW	TKEY_UP
#define TKEY_DOWN_ARROW	TKEY_DOWN
#define TKEY_LEFT_ARROW	TKEY_LEFT
#define TKEY_RIGHT_ARROW	TKEY_RIGHT
#define TKEY_RETURN	TKEY_ENTER
#define TKEY_LEFT_CTRL	MODIFIERKEY_LEFT_CTRL
#define TKEY_LEFT_SHIFT	MODIFIERKEY_LEFT_SHIFT
#define TKEY_LEFT_ALT	MODIFIERKEY_LEFT_ALT
#define TKEY_LEFT_GUI	MODIFIERKEY_LEFT_GUI
#define TKEY_RIGHT_CTRL	MODIFIERKEY_RIGHT_CTRL
#define TKEY_RIGHT_SHIFT	MODIFIERKEY_RIGHT_SHIFT
#define TKEY_RIGHT_ALT	MODIFIERKEY_RIGHT_ALT
#define TKEY_RIGHT_GUI	MODIFIERKEY_RIGHT_GUI


// Everything below this line is not intended for use in "normal" programs.
// These private symbols populate lookup tables, which are used to translate
// ascii and UTF8 unicode into keystroke sequences.


#ifdef LAYOUT_US_ENGLISH

#define SHIFT_MASK		0x40
#define KEYCODE_TYPE		uint8_t
#define KEYCODE_MASK		0x007F

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_QUOTE + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + SHIFT_MASK			// 35 #
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_7 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_QUOTE				// 39 '
#define ASCII_28	TKEY_9 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_0 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_8 + SHIFT_MASK			// 42 *
#define ASCII_2B	TKEY_EQUAL + SHIFT_MASK			// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_MINUS				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_SLASH				// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_SEMICOLON + SHIFT_MASK		// 58 :
#define ASCII_3B	TKEY_SEMICOLON				// 59 ;
#define ASCII_3C	TKEY_COMMA + SHIFT_MASK			// 60 <
#define ASCII_3D	TKEY_EQUAL				// 61 =
#define ASCII_3E	TKEY_PERIOD + SHIFT_MASK			// 62 >
#define ASCII_3F	TKEY_SLASH + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_2 + SHIFT_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_LEFT_BRACE				// 91 [
#define ASCII_5C	TKEY_BACKSLASH				// 92
#define ASCII_5D	TKEY_RIGHT_BRACE				// 93 ]
#define ASCII_5E	TKEY_6 + SHIFT_MASK			// 94 ^
#define ASCII_5F	TKEY_MINUS + SHIFT_MASK			// 95 _
#define ASCII_60	TKEY_TILDE				// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_LEFT_BRACE + SHIFT_MASK		// 123 {
#define ASCII_7C	TKEY_BACKSLASH + SHIFT_MASK		// 124 |
#define ASCII_7D	TKEY_RIGHT_BRACE + SHIFT_MASK		// 125 }
#define ASCII_7E	TKEY_TILDE + SHIFT_MASK			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127

#endif // LAYOUT_US_ENGLISH




#ifdef LAYOUT_US_INTERNATIONAL

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define ACUTE_ACCENT_BITS	0x0200
#define GRAVE_ACCENT_BITS	0x0300
#define TILDE_BITS		0x0400
#define DIAERESIS_BITS		0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_6 + SHIFT_MASK
#define DEADKEY_ACUTE_ACCENT	TKEY_QUOTE
#define DEADKEY_GRAVE_ACCENT	TKEY_TILDE
#define DEADKEY_TILDE		TKEY_TILDE + SHIFT_MASK
#define DEADKEY_DIAERESIS	TKEY_QUOTE + SHIFT_MASK

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	DIAERESIS_BITS + TKEY_SPACE		// 34 "
#define ASCII_23	TKEY_3 + SHIFT_MASK			// 35 #
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_7 + SHIFT_MASK			// 38 &
#define ASCII_27	ACUTE_ACCENT_BITS + TKEY_SPACE		// 39 '
#define ASCII_28	TKEY_9 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_0 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_8 + SHIFT_MASK			// 42 *
#define ASCII_2B	TKEY_EQUAL + SHIFT_MASK			// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_MINUS				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_SLASH				// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_SEMICOLON + SHIFT_MASK		// 58 :
#define ASCII_3B	TKEY_SEMICOLON				// 59 ;
#define ASCII_3C	TKEY_COMMA + SHIFT_MASK			// 60 <
#define ASCII_3D	TKEY_EQUAL				// 61 =
#define ASCII_3E	TKEY_PERIOD + SHIFT_MASK			// 62 >
#define ASCII_3F	TKEY_SLASH + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_2 + SHIFT_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_LEFT_BRACE				// 91 [
#define ASCII_5C	TKEY_BACKSLASH				// 92
#define ASCII_5D	TKEY_RIGHT_BRACE				// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_MINUS + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_LEFT_BRACE + SHIFT_MASK		// 123 {
#define ASCII_7C	TKEY_BACKSLASH + SHIFT_MASK		// 124 |
#define ASCII_7D	TKEY_RIGHT_BRACE + SHIFT_MASK		// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127
#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	TKEY_1 + ALTGR_MASK			// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	TKEY_C + ALTGR_MASK + SHIFT_MASK		// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_4 + ALTGR_MASK + SHIFT_MASK		// 163 £     Pound Sign
#define ISO_8859_1_A4	TKEY_4 + ALTGR_MASK			// 164 ¤     Currency or Euro Sign
#define ISO_8859_1_A5	TKEY_MINUS + ALTGR_MASK			// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	TKEY_BACKSLASH + ALTGR_MASK + SHIFT_MASK	// 166 ¦     BROKEN BAR			??
#define ISO_8859_1_A7	TKEY_S + ALTGR_MASK + SHIFT_MASK		// 167 §     SECTION SIGN
#define ISO_8859_1_A8	TKEY_QUOTE + ALTGR_MASK + SHIFT_MASK	// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	TKEY_C + ALTGR_MASK			// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	TKEY_LEFT_BRACE + ALTGR_MASK		// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	TKEY_BACKSLASH + ALTGR_MASK		// 172 ¬     NOT SIGN			??
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	TKEY_R + ALTGR_MASK			// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_SEMICOLON + ALTGR_MASK + SHIFT_MASK	// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	TKEY_2 + ALTGR_MASK			// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	TKEY_3 + ALTGR_MASK			// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	TKEY_QUOTE + ALTGR_MASK			// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	TKEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	TKEY_SEMICOLON + ALTGR_MASK		// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	TKEY_1 + ALTGR_MASK + SHIFT_MASK		// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	TKEY_RIGHT_BRACE + ALTGR_MASK		// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	TKEY_6 + ALTGR_MASK			// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	TKEY_7 + ALTGR_MASK			// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	TKEY_8 + ALTGR_MASK			// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	TKEY_SLASH + ALTGR_MASK			// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	TKEY_A + ALTGR_MASK + SHIFT_MASK		// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS	+ TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	TKEY_Q + ALTGR_MASK + SHIFT_MASK		// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	TKEY_W + ALTGR_MASK + SHIFT_MASK		// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	TKEY_Z + ALTGR_MASK + SHIFT_MASK		// 198 Æ     AE
#define ISO_8859_1_C7	TKEY_COMMA + ALTGR_MASK + SHIFT_MASK	// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	TKEY_E + ALTGR_MASK + SHIFT_MASK		// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	TKEY_I + ALTGR_MASK + SHIFT_MASK		// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	TKEY_D + ALTGR_MASK + SHIFT_MASK		// 208 Ð     ETH
#define ISO_8859_1_D1	TKEY_N + ALTGR_MASK + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	TKEY_O + ALTGR_MASK + SHIFT_MASK		// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	TKEY_P + ALTGR_MASK + SHIFT_MASK		// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	TKEY_EQUAL + ALTGR_MASK			// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	TKEY_L + ALTGR_MASK + SHIFT_MASK		// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	TKEY_U + ALTGR_MASK + SHIFT_MASK		// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	TKEY_Y + ALTGR_MASK + SHIFT_MASK		// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	TKEY_T + ALTGR_MASK + SHIFT_MASK		// 222 Þ     THORN
#define ISO_8859_1_DF	TKEY_S + ALTGR_MASK			// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	TKEY_A + ALTGR_MASK			// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_A			// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_A			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	TKEY_W + ALTGR_MASK			// 229 å     a RING ABOVE
#define ISO_8859_1_E6	TKEY_Z + ALTGR_MASK			// 230 æ     ae
#define ISO_8859_1_E7	TKEY_COMMA + ALTGR_MASK			// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	ACUTE_ACCENT_BITS + TKEY_E		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	TKEY_I + ALTGR_MASK			// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	TKEY_D + ALTGR_MASK			// 240 ð     ETH
#define ISO_8859_1_F1	TKEY_N + ALTGR_MASK			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	TKEY_O + ALTGR_MASK			// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O 			// 245 õ     o TILDE
#define ISO_8859_1_F6	TKEY_P + ALTGR_MASK			// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	TKEY_EQUAL + ALTGR_MASK + SHIFT_MASK	// 247 ÷     DIVISION
#define ISO_8859_1_F8	TKEY_L + ALTGR_MASK			// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	TKEY_U + ALTGR_MASK			// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	TKEY_Y + ALTGR_MASK			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	TKEY_T + ALTGR_MASK			// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_5 + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_5 + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_US_INTERNATIONAL



#ifdef LAYOUT_GERMAN

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0300
#define ACUTE_ACCENT_BITS	0x0400
#define GRAVE_ACCENT_BITS	0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_TILDE
#define DEADKEY_ACUTE_ACCENT	TKEY_EQUAL
#define DEADKEY_GRAVE_ACCENT	TKEY_EQUAL + SHIFT_MASK
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_BACKSLASH				// 35 #		??
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_BACKSLASH + SHIFT_MASK		// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_RIGHT_BRACE + SHIFT_MASK		// 42 *
#define ASCII_2B	TKEY_RIGHT_BRACE				// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_Q + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Z + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Y + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_8 + ALTGR_MASK			// 91 [
#define ASCII_5C	TKEY_MINUS + ALTGR_MASK			// 92
#define ASCII_5D	TKEY_9 + ALTGR_MASK			// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Z					// 121 y
#define ASCII_7A	TKEY_Y					// 122 z
#define ASCII_7B	TKEY_7 + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_NON_US_100 + ALTGR_MASK		// 124 |
#define ASCII_7D	TKEY_0 + ALTGR_MASK			// 125 }
#define ASCII_7E	TKEY_RIGHT_BRACE + ALTGR_MASK		// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127
#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent Sign
#define ISO_8859_1_A3	0					// 163 £     Pound Sign
#define ISO_8859_1_A4	TKEY_E + ALTGR_MASK			// 164 ¤     Currency Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_3 + SHIFT_MASK			// 167 §     SECTION SIGN
#define ISO_8859_1_A8	0					// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_TILDE + SHIFT_MASK			// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	TKEY_2 + ALTGR_MASK			// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	TKEY_3 + ALTGR_MASK			// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	0					// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	TKEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS	+ TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define ISO_8859_1_C4	TKEY_QUOTE + SHIFT_MASK			// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	0					// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	0					// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define ISO_8859_1_D6	TKEY_SEMICOLON + SHIFT_MASK		// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	TKEY_LEFT_BRACE + SHIFT_MASK		// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Z + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	TKEY_MINUS				// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	0					// 227 ã     a TILDE
#define ISO_8859_1_E4	TKEY_QUOTE				// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	ACUTE_ACCENT_BITS + TKEY_E		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	0					// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	0					// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	0					// 245 õ     o TILDE
#define ISO_8859_1_F6	TKEY_SEMICOLON				// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	TKEY_LEFT_BRACE				// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Z		// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	0					// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_E + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_GERMAN



#ifdef LAYOUT_GERMAN_MAC

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define ACUTE_ACCENT_BITS	0x0100
#define GRAVE_ACCENT_BITS	0x0200
#define	CIRCUMFLEX_BITS		0x0300
#define	DIAERESIS_BITS		0x0400
#define	TILDE_BITS		0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_ACUTE_ACCENT	TKEY_EQUAL
#define DEADKEY_GRAVE_ACCENT	TKEY_EQUAL + SHIFT_MASK
#define DEADKEY_CIRCUMFLEX	TKEY_6 + SHIFT_MASK + ALTGR_MASK
#define DEADKEY_DIAERESIS	TKEY_U + ALTGR_MASK
#define DEADKEY_TILDE		TKEY_N + ALTGR_MASK
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_BACKSLASH				// 35 #		??
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_BACKSLASH + SHIFT_MASK		// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_RIGHT_BRACE + SHIFT_MASK		// 42 *
#define ASCII_2B	TKEY_RIGHT_BRACE				// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_TILDE				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_TILDE + SHIFT_MASK			// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_Q + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Z + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Y + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_5 + ALTGR_MASK			// 91 [
#define ASCII_5C	TKEY_7 + ALTGR_MASK + SHIFT_MASK		// 92
#define ASCII_5D	TKEY_6 + ALTGR_MASK			// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Z					// 121 y
#define ASCII_7A	TKEY_Y					// 122 z
#define ASCII_7B	TKEY_8 + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_7 + ALTGR_MASK			// 124 |
#define ASCII_7D	TKEY_9 + ALTGR_MASK			// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127
#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	TKEY_1 + ALTGR_MASK			// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	TKEY_4 + ALTGR_MASK			// 162 ¢     Cent Sign
#define ISO_8859_1_A3	TKEY_4 + SHIFT_MASK + ALTGR_MASK		// 163 £     Pound Sign
#define ISO_8859_1_A4	TKEY_E + ALTGR_MASK			// 164 ¤     Currency Sign
#define ISO_8859_1_A5	TKEY_Z + ALTGR_MASK			// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_3 + SHIFT_MASK			// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	TKEY_G + ALTGR_MASK			// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	TKEY_H + ALTGR_MASK			// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	TKEY_Q + ALTGR_MASK			// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	TKEY_R + ALTGR_MASK			// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	TKEY_0 + SHIFT_MASK + ALTGR_MASK		// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_LEFT_BRACE + ALTGR_MASK + SHIFT_MASK// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	TKEY_RIGHT_BRACE + ALTGR_MASK		// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	TKEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	TKEY_3 + ALTGR_MASK			// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	TKEY_9 + SHIFT_MASK + ALTGR_MASK		// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	TKEY_J + ALTGR_MASK			// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	TKEY_Q + SHIFT_MASK + ALTGR_MASK		// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	TKEY_MINUS + ALTGR_MASK			// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS	+ TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	TKEY_QUOTE + SHIFT_MASK			// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	TKEY_A + ALTGR_MASK + SHIFT_MASK		// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	TKEY_QUOTE + ALTGR_MASK + SHIFT_MASK	// 198 Æ     AE
#define ISO_8859_1_C7	TKEY_C + ALTGR_MASK + SHIFT_MASK		// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	TILDE_BITS + TKEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	TKEY_SEMICOLON + SHIFT_MASK		// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	TKEY_O + ALTGR_MASK + SHIFT_MASK		// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	TKEY_LEFT_BRACE + SHIFT_MASK		// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Z + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	TKEY_MINUS				// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_A			// 227 ã     a TILDE
#define ISO_8859_1_E4	TKEY_QUOTE				// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	TKEY_A + ALTGR_MASK			// 229 å     a RING ABOVE
#define ISO_8859_1_E6	TKEY_QUOTE + ALTGR_MASK			// 230 æ     ae
#define ISO_8859_1_E7	TKEY_C + ALTGR_MASK			// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	ACUTE_ACCENT_BITS + TKEY_E		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	TILDE_BITS + TKEY_N			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O			// 245 õ     o TILDE
#define ISO_8859_1_F6	TKEY_SEMICOLON				// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	TKEY_O + ALTGR_MASK			// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	TKEY_LEFT_BRACE				// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Z		// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Z			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_E + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_GERMAN_MAC






#ifdef LAYOUT_CANADIAN_FRENCH

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define ACUTE_ACCENT_BITS	0x0200
#define GRAVE_ACCENT_BITS	0x0300
#define DIAERESIS_BITS		0x0400
#define CEDILLA_BITS		0x0500

#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_LEFT_BRACE
#define DEADKEY_ACUTE_ACCENT	TKEY_SLASH + ALTGR_MASK
#define DEADKEY_GRAVE_ACCENT	TKEY_QUOTE
#define DEADKEY_DIAERESIS	TKEY_RIGHT_BRACE + SHIFT_MASK
#define DEADKEY_CEDILLA		TKEY_RIGHT_BRACE
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_TILDE + SHIFT_MASK			// 35 #
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_7 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_COMMA + SHIFT_MASK			// 39 '
//#define ASCII_27	ACUTE_ACCENT_BITS + TKEY_SPACE		// 39 '
#define ASCII_28	TKEY_9 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_0 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_8 + SHIFT_MASK			// 42 *
#define ASCII_2B	TKEY_EQUAL + SHIFT_MASK			// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_MINUS				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_3 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_SEMICOLON + SHIFT_MASK		// 58 :
#define ASCII_3B	TKEY_SEMICOLON				// 59 ;
#define ASCII_3C	TKEY_BACKSLASH				// 60 <
#define ASCII_3D	TKEY_EQUAL				// 61 =
#define ASCII_3E	TKEY_BACKSLASH + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_6 + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_2 + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_LEFT_BRACE + ALTGR_MASK		// 91 [
#define ASCII_5C	TKEY_TILDE + ALTGR_MASK			// 92
#define ASCII_5D	TKEY_RIGHT_BRACE + ALTGR_MASK		// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_MINUS + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_QUOTE + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_TILDE + SHIFT_MASK			// 124 |
#define ASCII_7D	TKEY_BACKSLASH + ALTGR_MASK		// 125 }
#define ASCII_7E	TKEY_SEMICOLON + ALTGR_MASK		// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127
#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	TKEY_4 + ALTGR_MASK			// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_3 + ALTGR_MASK			// 163 £     Pound Sign
#define ISO_8859_1_A4	TKEY_5 + ALTGR_MASK			// 164 ¤     Currency or Euro Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	TKEY_7 + ALTGR_MASK			// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_O + ALTGR_MASK			// 167 §     SECTION SIGN
#define ISO_8859_1_A8	0					// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	TKEY_NON_US_100				// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	TKEY_6 + ALTGR_MASK			// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	TKEY_PERIOD + ALTGR_MASK			// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	TKEY_COMMA + ALTGR_MASK			// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_NON_US_100 + ALTGR_MASK		// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	TKEY_1 + ALTGR_MASK			// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	TKEY_8 + ALTGR_MASK			// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	TKEY_9 + ALTGR_MASK			// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	0					// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	TKEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	TKEY_P + ALTGR_MASK			// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	TKEY_NON_US_100 + SHIFT_MASK		// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	TKEY_0 + ALTGR_MASK			// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	TKEY_MINUS + ALTGR_MASK			// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	TKEY_EQUAL + ALTGR_MASK			// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS	+ TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	CEDILLA_BITS + TKEY_C + SHIFT_MASK	// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	TKEY_SLASH + SHIFT_MASK			// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U			// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	0					// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_A			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	CEDILLA_BITS + TKEY_C			// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	TKEY_SLASH				// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	0					// 245 õ     o TILDE
#define ISO_8859_1_F6	DIAERESIS_BITS + TKEY_O			// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS

#endif // LAYOUT_CANADIAN_FRENCH



#ifdef LAYOUT_CANADIAN_MULTILINGUAL

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define RCTRL_MASK		0x0800
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define DIAERESIS_BITS		0x0200
#define ACUTE_ACCENT_BITS	0x0300
#define CEDILLA_BITS		0x0400
#define GRAVE_ACCENT_BITS	0x0500
#define TILDE_BITS		0x0600
#define RING_ABOVE_BITS	 	0x0700
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x0FFF
#define DEADKEY_CIRCUMFLEX	TKEY_LEFT_BRACE
#define DEADKEY_DIAERESIS	TKEY_LEFT_BRACE + SHIFT_MASK
#define DEADKEY_ACUTE_ACCENT	TKEY_SEMICOLON + RCTRL_MASK
#define DEADKEY_CEDILLA		TKEY_EQUAL + RCTRL_MASK
#define DEADKEY_GRAVE_ACCENT	TKEY_LEFT_BRACE + ALTGR_MASK
#define DEADKEY_TILDE		TKEY_RIGHT_BRACE + ALTGR_MASK
#define DEADKEY_RING_ABOVE	TKEY_LEFT_BRACE + SHIFT_MASK + RCTRL_MASK
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_PERIOD + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + SHIFT_MASK			// 35 #
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_7 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_COMMA + SHIFT_MASK			// 39 '
#define ASCII_28	TKEY_9 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_0 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_8 + SHIFT_MASK			// 42 *
#define ASCII_2B	TKEY_EQUAL + SHIFT_MASK			// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_MINUS				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_TILDE				// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_SEMICOLON + SHIFT_MASK		// 58 :
#define ASCII_3B	TKEY_SEMICOLON				// 59 ;
#define ASCII_3C	TKEY_COMMA + ALTGR_MASK			// 60 <
#define ASCII_3D	TKEY_EQUAL				// 61 =
#define ASCII_3E	TKEY_PERIOD + ALTGR_MASK			// 62 >
#define ASCII_3F	TKEY_6 + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_2 + SHIFT_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_9 + ALTGR_MASK			// 91 [
#define ASCII_5C	TKEY_TILDE + SHIFT_MASK			// 92
#define ASCII_5D	TKEY_0 + ALTGR_MASK			// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_MINUS + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_7 + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_TILDE + ALTGR_MASK			// 124 |
#define ASCII_7D	TKEY_8 + ALTGR_MASK			// 125 }
#define ASCII_7E	TKEY_RIGHT_BRACE + RCTRL_MASK		// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127
#define ISO_8859_1_A0	TKEY_SPACE + ALTGR_MASK			// 160       Nonbreakng Space
#define ISO_8859_1_A1	TKEY_1 + SHIFT_MASK + RCTRL_MASK		// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	TKEY_C + RCTRL_MASK			// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_3 + SHIFT_MASK + RCTRL_MASK		// 163 £     Pound Sign
#define ISO_8859_1_A4	TKEY_4 + SHIFT_MASK + RCTRL_MASK		// 164 ¤     Currency or Euro Sign
#define ISO_8859_1_A5	TKEY_Y + SHIFT_MASK + RCTRL_MASK		// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	TKEY_NON_US_100 + SHIFT_MASK + RCTRL_MASK// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_S + SHIFT_MASK + RCTRL_MASK		// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	TKEY_C + SHIFT_MASK + RCTRL_MASK		// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	TKEY_F + SHIFT_MASK + RCTRL_MASK		// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	TKEY_Z + ALTGR_MASK			// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	TKEY_EQUAL + ALTGR_MASK			// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	TKEY_TILDE + SHIFT_MASK + RCTRL_MASK	// 173       SOFT HYPHEN
#define ISO_8859_1_AE	TKEY_R + SHIFT_MASK + RCTRL_MASK		// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0  // special dead key - no implemented	// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_SEMICOLON + ALTGR_MASK		// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	TKEY_9 + SHIFT_MASK + RCTRL_MASK		// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	TKEY_2 + RCTRL_MASK			// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	TKEY_3 + RCTRL_MASK			// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	TKEY_M + RCTRL_MASK			// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	TKEY_R + RCTRL_MASK			// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	CEDILLA_BITS + TKEY_SPACE		// 184 ¸     CEDILLA
#define ISO_8859_1_B9	TKEY_1 + RCTRL_MASK			// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	TKEY_M + SHIFT_MASK + RCTRL_MASK		// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	TKEY_X + ALTGR_MASK			// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	TKEY_4 + RCTRL_MASK			// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	TKEY_5 + RCTRL_MASK			// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	TKEY_6 + RCTRL_MASK			// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	TKEY_MINUS + SHIFT_MASK + RCTRL_MASK	// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	TKEY_BACKSLASH + SHIFT_MASK		// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS	+ TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	RING_ABOVE_BITS + TKEY_A + SHIFT_MASK	// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	TKEY_A + SHIFT_MASK + RCTRL_MASK		// 198 Æ     AE
#define ISO_8859_1_C7	TKEY_RIGHT_BRACE + SHIFT_MASK		// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	TKEY_QUOTE + SHIFT_MASK			// 200 È     E GRAVE
#define ISO_8859_1_C9	TKEY_SLASH + SHIFT_MASK			// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	TKEY_D + SHIFT_MASK + RCTRL_MASK		// 208 Ð     ETH
#define ISO_8859_1_D1	TILDE_BITS + TKEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	TKEY_COMMA + SHIFT_MASK + RCTRL_MASK	// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	TKEY_O + SHIFT_MASK + RCTRL_MASK		// 216 Ø     O STROKE
#define ISO_8859_1_D9	TKEY_NON_US_100 + SHIFT_MASK		// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U			// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	TKEY_P + RCTRL_MASK + SHIFT_MASK		// 222 Þ     THORN
#define ISO_8859_1_DF	TKEY_S + RCTRL_MASK			// 223 ß     SHARP S
#define ISO_8859_1_E0	TKEY_BACKSLASH				// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_A			// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_A			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	RING_ABOVE_BITS + TKEY_A			// 229 å     a RING ABOVE
#define ISO_8859_1_E6	TKEY_A + RCTRL_MASK			// 230 æ     ae
#define ISO_8859_1_E7	TKEY_RIGHT_BRACE				// 231 ç     c CEDILLA
#define ISO_8859_1_E8	TKEY_QUOTE				// 232 è     e GRAVE
#define ISO_8859_1_E9	TKEY_SLASH				// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	TKEY_D + RCTRL_MASK			// 240 ð     ETH
#define ISO_8859_1_F1	TILDE_BITS + TKEY_N			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O			// 245 õ     o TILDE
#define ISO_8859_1_F6	DIAERESIS_BITS + TKEY_O			// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	TKEY_PERIOD + SHIFT_MASK + RCTRL_MASK	// 247 ÷     DIVISION
#define ISO_8859_1_F8	TKEY_O + RCTRL_MASK			// 248 ø     o STROKE
#define ISO_8859_1_F9	TKEY_NON_US_100				// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	TKEY_P + RCTRL_MASK			// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS

#endif // LAYOUT_CANADIAN_MULTILINGUAL






#ifdef LAYOUT_UNITED_KINGDOM

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define KEYCODE_TYPE		uint8_t
#define KEYCODE_MASK		0x00FF
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_BACKSPACE				// 35 #
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_7 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_QUOTE				// 39 '
#define ASCII_28	TKEY_9 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_0 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_8 + SHIFT_MASK			// 42 *
#define ASCII_2B	TKEY_EQUAL + SHIFT_MASK			// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_MINUS				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_SLASH				// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_SEMICOLON + SHIFT_MASK		// 58 :
#define ASCII_3B	TKEY_SEMICOLON				// 59 ;
#define ASCII_3C	TKEY_COMMA + SHIFT_MASK			// 60 <
#define ASCII_3D	TKEY_EQUAL				// 61 =
#define ASCII_3E	TKEY_PERIOD + SHIFT_MASK			// 62 >
#define ASCII_3F	TKEY_SLASH + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_QUOTE + SHIFT_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_LEFT_BRACE				// 91 [
#define ASCII_5C	TKEY_NON_US_100				// 92
#define ASCII_5D	TKEY_RIGHT_BRACE				// 93 ]
#define ASCII_5E	TKEY_6 + SHIFT_MASK			// 94 ^
#define ASCII_5F	TKEY_MINUS + SHIFT_MASK			// 95 _
#define ASCII_60	TKEY_TILDE				// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_LEFT_BRACE + SHIFT_MASK		// 123 {
#define ASCII_7C	TKEY_NON_US_100 + SHIFT_MASK		// 124 |
#define ASCII_7D	TKEY_RIGHT_BRACE + SHIFT_MASK		// 125 }
#define ASCII_7E	TKEY_BACKSLASH + SHIFT_MASK		// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127

#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_3 + SHIFT_MASK			// 163 £     Pound Sign
#define ISO_8859_1_A4	0					// 164 ¤     Currency or Euro Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	TKEY_TILDE + ALTGR_MASK			// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	0					// 167 §     SECTION SIGN
#define ISO_8859_1_A8	0					// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	TKEY_TILDE + SHIFT_MASK			// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	0					// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	0					// 192 À     A GRAVE
#define ISO_8859_1_C1	TKEY_A + ALTGR_MASK + SHIFT_MASK		// 193 Á     A ACUTE
#define ISO_8859_1_C2	0					// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define ISO_8859_1_C4	0					// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	0					// 200 È     E GRAVE
#define ISO_8859_1_C9	TKEY_E + ALTGR_MASK + SHIFT_MASK		// 201 É     E ACUTE
#define ISO_8859_1_CA	0					// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	0					// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	0					// 204 Ì     I GRAVE
#define ISO_8859_1_CD	TKEY_I + ALTGR_MASK + SHIFT_MASK		// 205 Í     I ACUTE
#define ISO_8859_1_CE	0					// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	0					// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define ISO_8859_1_D2	0					// 210 Ò     O GRAVE
#define ISO_8859_1_D3	TKEY_O + ALTGR_MASK + SHIFT_MASK		// 211 Ó     O ACUTE
#define ISO_8859_1_D4	0					// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define ISO_8859_1_D6	0					// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	0					// 217 Ù     U GRAVE
#define ISO_8859_1_DA	TKEY_U + ALTGR_MASK + SHIFT_MASK		// 218 Ú     U ACUTE
#define ISO_8859_1_DB	0					// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	0					// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	0					// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ISO_8859_1_E0	0					// 224 à     a GRAVE
#define ISO_8859_1_E1	TKEY_A + ALTGR_MASK			// 225 á     a ACUTE
#define ISO_8859_1_E2	0					// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	0					// 227 ã     a TILDE
#define ISO_8859_1_E4	0					// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define ISO_8859_1_E8	0					// 232 è     e GRAVE
#define ISO_8859_1_E9	TKEY_E + ALTGR_MASK			// 233 é     e ACUTE
#define ISO_8859_1_EA	0					// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	0					// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	0					// 236 ì     i GRAVE
#define ISO_8859_1_ED	TKEY_I + ALTGR_MASK			// 237 í     i ACUTE
#define ISO_8859_1_EE	0					// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	0					// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define ISO_8859_1_F2	0					// 242 ò     o GRAVE
#define ISO_8859_1_F3	TKEY_O + ALTGR_MASK			// 243 ó     o ACUTE
#define ISO_8859_1_F4	0					// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	0					// 245 õ     o TILDE
#define ISO_8859_1_F6	0					// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	0					// 249 ù     u GRAVE
#define ISO_8859_1_FA	TKEY_U + ALTGR_MASK			// 250 ú     u ACUTE
#define ISO_8859_1_FB	0					// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	0					// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	0					// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	0					// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_4 + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_4 + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_UNITED_KINGDOM



#ifdef LAYOUT_FINNISH

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define ACUTE_ACCENT_BITS	0x0200
#define GRAVE_ACCENT_BITS	0x0300
#define TILDE_BITS		0x0400
#define DIAERESIS_BITS		0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_RIGHT_BRACE + SHIFT_MASK
#define DEADKEY_ACUTE_ACCENT	TKEY_EQUAL
#define DEADKEY_GRAVE_ACCENT	TKEY_EQUAL + SHIFT_MASK
#define DEADKEY_TILDE		TKEY_RIGHT_BRACE + ALTGR_MASK
#define DEADKEY_DIAERESIS	TKEY_RIGHT_BRACE
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + SHIFT_MASK			// 35 #
#define ASCII_24	TKEY_4 + ALTGR_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_BACKSLASH				// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_BACKSLASH + SHIFT_MASK		// 42 *
#define ASCII_2B	TKEY_MINUS				// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_2 + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_8 + ALTGR_MASK			// 91 [
#define ASCII_5C	TKEY_MINUS + ALTGR_MASK			// 92
#define ASCII_5D	TKEY_9 + ALTGR_MASK			// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_7 + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_NON_US_100 + ALTGR_MASK		// 124 |
#define ASCII_7D	TKEY_0 + ALTGR_MASK			// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127
#define ISO_8859_1_A0	TKEY_SPACE + ALTGR_MASK			// 160       Nonbreakng Space
#define ISO_8859_1_A1	TKEY_1 + SHIFT_MASK + ALTGR_MASK		// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_3 + ALTGR_MASK			// 163 £     Pound Sign
#define ISO_8859_1_A4	TKEY_4 + SHIFT_MASK			// 164 ¤     Currency or Euro Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_TILDE				// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	TKEY_4 + ALTGR_MASK + SHIFT_MASK		// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	TKEY_SLASH + ALTGR_MASK			// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_0 + ALTGR_MASK + SHIFT_MASK		// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	TKEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	TKEY_X + ALTGR_MASK + SHIFT_MASK		// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	TKEY_3 + ALTGR_MASK + SHIFT_MASK		// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	TKEY_TILDE + SHIFT_MASK			// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	TKEY_MINUS + ALTGR_MASK + SHIFT_MASK	// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS + TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	TKEY_QUOTE + SHIFT_MASK			// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	TKEY_LEFT_BRACE + SHIFT_MASK		// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	TKEY_QUOTE + ALTGR_MASK + SHIFT_MASK	// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	TKEY_D + ALTGR_MASK + SHIFT_MASK		// 208 Ð     ETH
#define ISO_8859_1_D1	TILDE_BITS + TKEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	TKEY_SEMICOLON + SHIFT_MASK		// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	TKEY_X + ALTGR_MASK			// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	TKEY_SEMICOLON + ALTGR_MASK + SHIFT_MASK	// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	TKEY_T + ALTGR_MASK + SHIFT_MASK		// 222 Þ     THORN
#define ISO_8859_1_DF	TKEY_S + ALTGR_MASK			// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_A			// 227 ã     a TILDE
#define ISO_8859_1_E4	TKEY_QUOTE				// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	TKEY_LEFT_BRACE				// 229 å     a RING ABOVE
#define ISO_8859_1_E6	TKEY_QUOTE + ALTGR_MASK			// 230 æ     ae
#define ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	ACUTE_ACCENT_BITS + TKEY_E		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	TKEY_D + ALTGR_MASK			// 240 ð     ETH
#define ISO_8859_1_F1	TILDE_BITS + TKEY_N			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O			// 245 õ     o TILDE
#define ISO_8859_1_F6	TKEY_SEMICOLON				// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	TKEY_SEMICOLON + ALTGR_MASK		// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	TKEY_T + ALTGR_MASK			// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_E + ALTGR_MASK			// 20AC €    Euro Sign
// TODO: Finnish Multilingual layout can type many more glyphs
// but we currently don't have tables tables to store them...

#endif // LAYOUT_FINNISH







#ifdef LAYOUT_FRENCH

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define GRAVE_ACCENT_BITS	0x0200
#define DIAERESIS_BITS		0x0300
#define TILDE_BITS		0x0400
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_LEFT_BRACE
#define DEADKEY_GRAVE_ACCENT	TKEY_7 + ALTGR_MASK
#define DEADKEY_DIAERESIS	TKEY_LEFT_BRACE + SHIFT_MASK
#define DEADKEY_TILDE		TKEY_2 + ALTGR_MASK
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_SLASH				// 33 !
#define ASCII_22	TKEY_3					// 34 "
#define ASCII_23	TKEY_3 + ALTGR_MASK			// 35 #
#define ASCII_24	TKEY_RIGHT_BRACE				// 36 $
#define ASCII_25	TKEY_QUOTE + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_1					// 38 &
#define ASCII_27	TKEY_4					// 39 '
#define ASCII_28	TKEY_5					// 40 (
#define ASCII_29	TKEY_MINUS				// 41 )
#define ASCII_2A	TKEY_BACKSLASH				// 42 *
#define ASCII_2B	TKEY_EQUAL + SHIFT_MASK			// 43 +
#define ASCII_2C	TKEY_M					// 44 ,
#define ASCII_2D	TKEY_6					// 45 -
#define ASCII_2E	TKEY_COMMA + SHIFT_MASK			// 46 .
#define ASCII_2F	TKEY_PERIOD + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0 + SHIFT_MASK			// 48 0
#define ASCII_31	TKEY_1 + SHIFT_MASK			// 49 1
#define ASCII_32	TKEY_2 + SHIFT_MASK			// 50 2
#define ASCII_33	TKEY_3 + SHIFT_MASK			// 51 3
#define ASCII_34	TKEY_4 + SHIFT_MASK			// 52 4
#define ASCII_35	TKEY_5 + SHIFT_MASK			// 53 5
#define ASCII_36	TKEY_6 + SHIFT_MASK			// 54 6
#define ASCII_37	TKEY_7 + SHIFT_MASK			// 55 7
#define ASCII_38	TKEY_8 + SHIFT_MASK			// 55 8
#define ASCII_39	TKEY_9 + SHIFT_MASK			// 57 9
#define ASCII_3A	TKEY_PERIOD				// 58 :
#define ASCII_3B	TKEY_COMMA				// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_EQUAL				// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_M + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_0 + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_Q + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_SEMICOLON + SHIFT_MASK		// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_A + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_Z + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_W + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_5 + ALTGR_MASK			// 91 [
#define ASCII_5C	TKEY_8 + ALTGR_MASK			// 92
#define ASCII_5D	TKEY_MINUS + ALTGR_MASK			// 93 ]
#define ASCII_5E	TKEY_9 + ALTGR_MASK			// 94 ^
#define ASCII_5F	TKEY_8					// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_Q					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_SEMICOLON				// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_A					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_Z					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_W					// 122 z
#define ASCII_7B	TKEY_4 + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_6 + ALTGR_MASK			// 124 |
#define ASCII_7D	TKEY_EQUAL + ALTGR_MASK			// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127
#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_RIGHT_BRACE + SHIFT_MASK		// 163 £     Pound Sign
#define ISO_8859_1_A4	TKEY_RIGHT_BRACE + ALTGR_MASK		// 164 ¤     Currency or Euro Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_SLASH + SHIFT_MASK			// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_MINUS + SHIFT_MASK			// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	TKEY_TILDE				// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	0					// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	TKEY_BACKSLASH + SHIFT_MASK		// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_Q + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	0					// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS	+ TKEY_Q + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_Q + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_Q + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	0					// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	0					// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	TILDE_BITS + TKEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	0					// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	0					// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U			// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	0					// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ISO_8859_1_E0	TKEY_0					// 224 à     a GRAVE
#define ISO_8859_1_E1	0					// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_Q			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_Q			// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_Q			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	TKEY_9					// 231 ç     c CEDILLA
#define ISO_8859_1_E8	TKEY_7					// 232 è     e GRAVE
#define ISO_8859_1_E9	TKEY_2					// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	0					// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	TILDE_BITS + TKEY_N			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	0					// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O			// 245 õ     o TILDE
#define ISO_8859_1_F6	DIAERESIS_BITS + TKEY_O			// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	TKEY_SEMICOLON				// 249 ù     u GRAVE
#define ISO_8859_1_FA	0					// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	0					// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_E + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_FRENCH





#ifdef LAYOUT_DANISH

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define ACUTE_ACCENT_BITS	0x0200
#define GRAVE_ACCENT_BITS	0x0300
#define TILDE_BITS		0x0400
#define DIAERESIS_BITS		0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_RIGHT_BRACE + SHIFT_MASK
#define DEADKEY_ACUTE_ACCENT	TKEY_EQUAL
#define DEADKEY_GRAVE_ACCENT	TKEY_EQUAL + SHIFT_MASK
#define DEADKEY_TILDE		TKEY_RIGHT_BRACE + ALTGR_MASK
#define DEADKEY_DIAERESIS	TKEY_RIGHT_BRACE
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + SHIFT_MASK			// 35 #
#define ASCII_24	TKEY_4 + ALTGR_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_BACKSLASH				// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_BACKSLASH + SHIFT_MASK		// 42 *
#define ASCII_2B	TKEY_MINUS				// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_2 + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_8 + ALTGR_MASK			// 91 [
#define ASCII_5C	TKEY_NON_US_100 + ALTGR_MASK		// 92
#define ASCII_5D	TKEY_9 + ALTGR_MASK			// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_7 + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_EQUAL + ALTGR_MASK			// 124 |
#define ASCII_7D	TKEY_0 + ALTGR_MASK			// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127

#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_3 + ALTGR_MASK			// 163 £     Pound Sign
#define ISO_8859_1_A4	TKEY_4 + SHIFT_MASK			// 164 ¤     Currency Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_TILDE + SHIFT_MASK			// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	TKEY_4					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	TKEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	TKEY_TILDE				// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS + TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	TKEY_LEFT_BRACE + SHIFT_MASK		// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	TKEY_SEMICOLON + SHIFT_MASK		// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	TKEY_D + ALTGR_MASK + SHIFT_MASK		// 208 Ð     ETH
#define ISO_8859_1_D1	TILDE_BITS + TKEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	TKEY_QUOTE + SHIFT_MASK			// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	TKEY_T + ALTGR_MASK + SHIFT_MASK		// 222 Þ     THORN
#define ISO_8859_1_DF	TKEY_S + ALTGR_MASK			// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_A			// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_A			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	TKEY_LEFT_BRACE				// 229 å     a RING ABOVE
#define ISO_8859_1_E6	TKEY_SEMICOLON				// 230 æ     ae
#define ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	ACUTE_ACCENT_BITS + TKEY_E		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	TKEY_D + ALTGR_MASK			// 240 ð     ETH
#define ISO_8859_1_F1	TILDE_BITS + TKEY_N			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O			// 245 õ     o TILDE
#define ISO_8859_1_F6	DIAERESIS_BITS + TKEY_O			// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	TKEY_QUOTE				// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	TKEY_T + ALTGR_MASK			// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_E + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_DANISH





#ifdef LAYOUT_NORWEGIAN

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define ACUTE_ACCENT_BITS	0x0200
#define GRAVE_ACCENT_BITS	0x0300
#define TILDE_BITS		0x0400
#define DIAERESIS_BITS		0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_RIGHT_BRACE + SHIFT_MASK
#define DEADKEY_ACUTE_ACCENT	TKEY_EQUAL + ALTGR_MASK
#define DEADKEY_GRAVE_ACCENT	TKEY_EQUAL + SHIFT_MASK
#define DEADKEY_TILDE		TKEY_RIGHT_BRACE + ALTGR_MASK
#define DEADKEY_DIAERESIS	TKEY_RIGHT_BRACE
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + SHIFT_MASK			// 35 #
#define ASCII_24	TKEY_4 + ALTGR_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_BACKSLASH				// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_BACKSLASH + SHIFT_MASK		// 42 *
#define ASCII_2B	TKEY_MINUS				// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_2 + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_8 + ALTGR_MASK			// 91 [
#define ASCII_5C	TKEY_EQUAL				// 92
#define ASCII_5D	TKEY_9 + ALTGR_MASK			// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_7 + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_TILDE				// 124 |
#define ASCII_7D	TKEY_0 + ALTGR_MASK			// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127

#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_3 + ALTGR_MASK			// 163 £     Pound Sign
#define ISO_8859_1_A4	TKEY_4 + SHIFT_MASK			// 164 ¤     Currency Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_TILDE + SHIFT_MASK			// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	TKEY_4					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	TKEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	TKEY_TILDE				// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS + TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	TKEY_LEFT_BRACE + SHIFT_MASK		// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	TKEY_QUOTE + SHIFT_MASK			// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	TKEY_D + ALTGR_MASK + SHIFT_MASK		// 208 Ð     ETH
#define ISO_8859_1_D1	TILDE_BITS + TKEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	TKEY_SEMICOLON + SHIFT_MASK		// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	TKEY_T + ALTGR_MASK + SHIFT_MASK		// 222 Þ     THORN
#define ISO_8859_1_DF	TKEY_S + ALTGR_MASK			// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_A			// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_A			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	TKEY_LEFT_BRACE				// 229 å     a RING ABOVE
#define ISO_8859_1_E6	TKEY_QUOTE				// 230 æ     ae
#define ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	ACUTE_ACCENT_BITS + TKEY_E		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	TKEY_D + ALTGR_MASK			// 240 ð     ETH
#define ISO_8859_1_F1	TILDE_BITS + TKEY_N			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O			// 245 õ     o TILDE
#define ISO_8859_1_F6	DIAERESIS_BITS + TKEY_O			// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	TKEY_SEMICOLON				// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	TKEY_T + ALTGR_MASK			// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_E + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_NORWEGIAN






#ifdef LAYOUT_SWEDISH

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define ACUTE_ACCENT_BITS	0x0200
#define GRAVE_ACCENT_BITS	0x0300
#define TILDE_BITS		0x0400
#define DIAERESIS_BITS		0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_RIGHT_BRACE + SHIFT_MASK
#define DEADKEY_ACUTE_ACCENT	TKEY_EQUAL
#define DEADKEY_GRAVE_ACCENT	TKEY_EQUAL + SHIFT_MASK
#define DEADKEY_TILDE		TKEY_RIGHT_BRACE + ALTGR_MASK
#define DEADKEY_DIAERESIS	TKEY_RIGHT_BRACE
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + SHIFT_MASK			// 35 #
#define ASCII_24	TKEY_4 + ALTGR_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_BACKSLASH				// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_BACKSLASH + SHIFT_MASK		// 42 *
#define ASCII_2B	TKEY_MINUS				// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_2 + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_8 + ALTGR_MASK			// 91 [
#define ASCII_5C	TKEY_MINUS + ALTGR_MASK			// 92
#define ASCII_5D	TKEY_9 + ALTGR_MASK			// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_7 + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_NON_US_100 + ALTGR_MASK		// 124 |
#define ASCII_7D	TKEY_0 + ALTGR_MASK			// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127

#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_3 + ALTGR_MASK			// 163 £     Pound Sign
#define ISO_8859_1_A4	TKEY_4 + SHIFT_MASK			// 164 ¤     Currency Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_TILDE				// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	TKEY_4					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	TKEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	TKEY_TILDE + SHIFT_MASK			// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS + TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	TKEY_QUOTE + SHIFT_MASK			// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	TKEY_LEFT_BRACE + SHIFT_MASK		// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	TKEY_D + ALTGR_MASK + SHIFT_MASK		// 208 Ð     ETH
#define ISO_8859_1_D1	TILDE_BITS + TKEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	TKEY_SEMICOLON + SHIFT_MASK		// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	TKEY_T + ALTGR_MASK + SHIFT_MASK		// 222 Þ     THORN
#define ISO_8859_1_DF	TKEY_S + ALTGR_MASK			// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_A			// 227 ã     a TILDE
#define ISO_8859_1_E4	TKEY_QUOTE				// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	TKEY_LEFT_BRACE				// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	ACUTE_ACCENT_BITS + TKEY_E		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	TKEY_D + ALTGR_MASK			// 240 ð     ETH
#define ISO_8859_1_F1	TILDE_BITS + TKEY_N			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O			// 245 õ     o TILDE
#define ISO_8859_1_F6	TKEY_SEMICOLON				// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	TKEY_T + ALTGR_MASK			// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_E + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_SWEDISH






#ifdef LAYOUT_SPANISH

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define ACUTE_ACCENT_BITS	0x0200
#define GRAVE_ACCENT_BITS	0x0300
#define TILDE_BITS		0x0400
#define DIAERESIS_BITS		0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_LEFT_BRACE + SHIFT_MASK
#define DEADKEY_ACUTE_ACCENT	TKEY_QUOTE
#define DEADKEY_GRAVE_ACCENT	TKEY_LEFT_BRACE
#define DEADKEY_TILDE		TKEY_4 + ALTGR_MASK
#define DEADKEY_DIAERESIS	TKEY_QUOTE + SHIFT_MASK
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + ALTGR_MASK			// 35 #
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_MINUS				// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_RIGHT_BRACE + SHIFT_MASK		// 42 *
#define ASCII_2B	TKEY_RIGHT_BRACE				// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_2 + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_LEFT_BRACE + ALTGR_MASK		// 91 [
#define ASCII_5C	TKEY_TILDE + ALTGR_MASK			// 92
#define ASCII_5D	TKEY_RIGHT_BRACE + ALTGR_MASK		// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_QUOTE + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_1 + ALTGR_MASK			// 124 |
#define ASCII_7D	TKEY_BACKSLASH + ALTGR_MASK		// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127

#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	TKEY_EQUAL				// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	0					// 163 £     Pound Sign
#define ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	0					// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	TKEY_TILDE + SHIFT_MASK			// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	TKEY_6 + ALTGR_MASK			// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	TKEY_3 + SHIFT_MASK			// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	TKEY_TILDE				// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	TKEY_EQUAL				// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS + TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	TKEY_BACKSLASH + SHIFT_MASK		// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	TKEY_SEMICOLON + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_A			// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_A			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	TKEY_BACKSLASH				// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	ACUTE_ACCENT_BITS + TKEY_E		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	TKEY_SEMICOLON				// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O			// 245 õ     o TILDE
#define ISO_8859_1_F6	DIAERESIS_BITS + TKEY_O			// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_5 + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_5 + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_SPANISH




#ifdef LAYOUT_PORTUGUESE

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define ACUTE_ACCENT_BITS	0x0200
#define GRAVE_ACCENT_BITS	0x0300
#define TILDE_BITS		0x0400
#define DIAERESIS_BITS		0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_BACKSLASH
#define DEADKEY_ACUTE_ACCENT	TKEY_RIGHT_BRACE + SHIFT_MASK
#define DEADKEY_GRAVE_ACCENT	TKEY_RIGHT_BRACE + SHIFT_MASK
#define DEADKEY_TILDE		TKEY_BACKSLASH
#define DEADKEY_DIAERESIS	TKEY_LEFT_BRACE + SHIFT_MASK
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + ALTGR_MASK			// 35 #
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_MINUS				// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_LEFT_BRACE + SHIFT_MASK		// 42 *
#define ASCII_2B	TKEY_LEFT_BRACE				// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_2 + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_8 + ALTGR_MASK			// 91 [
#define ASCII_5C	TKEY_TILDE + ALTGR_MASK			// 92
#define ASCII_5D	TKEY_9 + ALTGR_MASK			// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_7 + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_TILDE + SHIFT_MASK			// 124 |
#define ASCII_7D	TKEY_0 + ALTGR_MASK			// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127

#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_3 + ALTGR_MASK			// 163 £     Pound Sign
#define ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_4 + ALTGR_MASK			// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	TKEY_QUOTE + SHIFT_MASK			// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	TKEY_EQUAL				// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	TKEY_QUOTE				// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	TKEY_EQUAL + SHIFT_MASK			// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS + TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	TKEY_SEMICOLON + SHIFT_MASK		// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	TILDE_BITS + TKEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_A			// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_A			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	TKEY_SEMICOLON				// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	ACUTE_ACCENT_BITS + TKEY_E		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	TILDE_BITS + TKEY_N			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O			// 245 õ     o TILDE
#define ISO_8859_1_F6	DIAERESIS_BITS + TKEY_O			// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_E + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_PORTUGUESE







#ifdef LAYOUT_ITALIAN

#define SHIFT_MASK		0x40
#define ALTGR_MASK		0x80
#define KEYCODE_TYPE		uint8_t
#define KEYCODE_MASK		0x00FF
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_QUOTE + ALTGR_MASK			// 35 #
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_MINUS				// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_RIGHT_BRACE + SHIFT_MASK		// 42 *
#define ASCII_2B	TKEY_RIGHT_BRACE				// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_SEMICOLON + ALTGR_MASK		// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_LEFT_BRACE + ALTGR_MASK		// 91 [
#define ASCII_5C	TKEY_TILDE				// 92
#define ASCII_5D	TKEY_RIGHT_BRACE + ALTGR_MASK		// 93 ]
#define ASCII_5E	TKEY_EQUAL + SHIFT_MASK			// 94 ^
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _
#define ASCII_60	0					// 96 `  (how to type this on Italian?)
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_LEFT_BRACE + SHIFT_MASK + ALTGR_MASK // 123 {
#define ASCII_7C	TKEY_TILDE + SHIFT_MASK			// 124 |
#define ASCII_7D	TKEY_RIGHT_BRACE + SHIFT_MASK + ALTGR_MASK // 125 }
#define ASCII_7E	0					// 126 ~   (how to type this on Italian?)
#define ASCII_7F	TKEY_BACKSPACE				// 127

#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent Sign
#define ISO_8859_1_A3	TKEY_3 + SHIFT_MASK			// 163 £     Pound Sign
#define ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_BACKSLASH + SHIFT_MASK		// 167 §     SECTION SIGN
#define ISO_8859_1_A8	0					// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_QUOTE + SHIFT_MASK			// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	0					// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	0					// 192 À     A GRAVE
#define ISO_8859_1_C1	0					// 193 Á     A ACUTE
#define ISO_8859_1_C2	0					// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define ISO_8859_1_C4	0					// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	0					// 200 È     E GRAVE
#define ISO_8859_1_C9	0					// 201 É     E ACUTE
#define ISO_8859_1_CA	0					// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	0					// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	0					// 204 Ì     I GRAVE
#define ISO_8859_1_CD	0					// 205 Í     I ACUTE
#define ISO_8859_1_CE	0					// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	0					// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define ISO_8859_1_D2	0					// 210 Ò     O GRAVE
#define ISO_8859_1_D3	0					// 211 Ó     O ACUTE
#define ISO_8859_1_D4	0					// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define ISO_8859_1_D6	0					// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	0					// 217 Ù     U GRAVE
#define ISO_8859_1_DA	0					// 218 Ú     U ACUTE
#define ISO_8859_1_DB	0					// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	0					// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	0					// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ISO_8859_1_E0	TKEY_QUOTE				// 224 à     a GRAVE
#define ISO_8859_1_E1	0					// 225 á     a ACUTE
#define ISO_8859_1_E2	0					// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	0					// 227 ã     a TILDE
#define ISO_8859_1_E4	0					// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	TKEY_SEMICOLON + SHIFT_MASK		// 231 ç     c CEDILLA
#define ISO_8859_1_E8	TKEY_LEFT_BRACE				// 232 è     e GRAVE
#define ISO_8859_1_E9	TKEY_LEFT_BRACE + SHIFT_MASK		// 233 é     e ACUTE
#define ISO_8859_1_EA	0					// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	0					// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	TKEY_EQUAL				// 236 ì     i GRAVE
#define ISO_8859_1_ED	0					// 237 í     i ACUTE
#define ISO_8859_1_EE	0					// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	0					// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define ISO_8859_1_F2	TKEY_SEMICOLON				// 242 ò     o GRAVE
#define ISO_8859_1_F3	0					// 243 ó     o ACUTE
#define ISO_8859_1_F4	0					// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	0					// 245 õ     o TILDE
#define ISO_8859_1_F6	0					// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	TKEY_BACKSLASH				// 249 ù     u GRAVE
#define ISO_8859_1_FA	0					// 250 ú     u ACUTE
#define ISO_8859_1_FB	0					// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	0					// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	0					// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	0					// 255 ÿ     y DIAERESIS

#endif // LAYOUT_ITALIAN




#ifdef LAYOUT_PORTUGUESE_BRAZILIAN

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define ACUTE_ACCENT_BITS	0x0200
#define GRAVE_ACCENT_BITS	0x0300
#define TILDE_BITS		0x0400
#define DIAERESIS_BITS		0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_QUOTE + SHIFT_MASK
#define DEADKEY_ACUTE_ACCENT	TKEY_LEFT_BRACE
#define DEADKEY_GRAVE_ACCENT	TKEY_LEFT_BRACE + SHIFT_MASK
#define DEADKEY_TILDE		TKEY_QUOTE
#define DEADKEY_DIAERESIS	TKEY_6 + SHIFT_MASK
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_TILDE + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + ALTGR_MASK			// 35 #
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_7 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_TILDE				// 39 '
#define ASCII_28	TKEY_9 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_0 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_7 + SHIFT_MASK			// 42 *
#define ASCII_2B	TKEY_EQUAL + SHIFT_MASK			// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_MINUS				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_Q + ALTGR_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_SLASH + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_SLASH				// 59 ;
#define ASCII_3C	TKEY_COMMA + SHIFT_MASK			// 60 <
#define ASCII_3D	TKEY_EQUAL				// 61 =
#define ASCII_3E	TKEY_PERIOD + SHIFT_MASK			// 62 >
#define ASCII_3F	TKEY_W + ALTGR_MASK			// 63 ?
#define ASCII_40	TKEY_2 + SHIFT_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_RIGHT_BRACE				// 91 [
#define ASCII_5C	TKEY_NON_US_100				// 92
#define ASCII_5D	TKEY_BACKSLASH				// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_MINUS + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_RIGHT_BRACE + SHIFT_MASK		// 123 {
#define ASCII_7C	TKEY_NON_US_100 + SHIFT_MASK		// 124 |
#define ASCII_7D	TKEY_BACKSLASH + SHIFT_MASK		// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127

#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	TKEY_5 + ALTGR_MASK			// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_4 + ALTGR_MASK			// 163 £     Pound Sign
#define ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_EQUAL + ALTGR_MASK			// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	TKEY_RIGHT_BRACE + ALTGR_MASK		// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	TKEY_6 + ALTGR_MASK			// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_E + ALTGR_MASK			// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	TKEY_2 + ALTGR_MASK			// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	TKEY_2 + ALTGR_MASK			// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	TKEY_1 + ALTGR_MASK			// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	TKEY_BACKSLASH + ALTGR_MASK		// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS + TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	TILDE_BITS + TKEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_A			// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_A			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	ACUTE_ACCENT_BITS + TKEY_E		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	TILDE_BITS + TKEY_N			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O			// 245 õ     o TILDE
#define ISO_8859_1_F6	DIAERESIS_BITS + TKEY_O			// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS

#endif // LAYOUT_PORTUGUESE_BRAZILIAN



#ifdef LAYOUT_FRENCH_BELGIAN

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define GRAVE_ACCENT_BITS	0x0200
#define DIAERESIS_BITS		0x0300
#define TILDE_BITS		0x0400
#define ACUTE_ACCENT_BITS	0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_LEFT_BRACE
#define DEADKEY_ACUTE_ACCENT	TKEY_QUOTE + ALTGR_MASK
#define DEADKEY_GRAVE_ACCENT	TKEY_BACKSLASH + ALTGR_MASK
#define DEADKEY_DIAERESIS	TKEY_LEFT_BRACE + SHIFT_MASK
#define DEADKEY_TILDE		TKEY_SLASH + ALTGR_MASK
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_8					// 33 !
#define ASCII_22	TKEY_3					// 34 "
#define ASCII_23	TKEY_3 + ALTGR_MASK			// 35 #
#define ASCII_24	TKEY_RIGHT_BRACE				// 36 $
#define ASCII_25	TKEY_QUOTE + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_1					// 38 &
#define ASCII_27	TKEY_4					// 39 '
#define ASCII_28	TKEY_5					// 40 (
#define ASCII_29	TKEY_MINUS				// 41 )
#define ASCII_2A	TKEY_RIGHT_BRACE + SHIFT_MASK		// 42 *
#define ASCII_2B	TKEY_SLASH + SHIFT_MASK			// 43 +
#define ASCII_2C	TKEY_M					// 44 ,
#define ASCII_2D	TKEY_EQUAL				// 45 -
#define ASCII_2E	TKEY_COMMA + SHIFT_MASK			// 46 .
#define ASCII_2F	TKEY_PERIOD + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0 + SHIFT_MASK			// 48 0
#define ASCII_31	TKEY_1 + SHIFT_MASK			// 49 1
#define ASCII_32	TKEY_2 + SHIFT_MASK			// 50 2
#define ASCII_33	TKEY_3 + SHIFT_MASK			// 51 3
#define ASCII_34	TKEY_4 + SHIFT_MASK			// 52 4
#define ASCII_35	TKEY_5 + SHIFT_MASK			// 53 5
#define ASCII_36	TKEY_6 + SHIFT_MASK			// 54 6
#define ASCII_37	TKEY_7 + SHIFT_MASK			// 55 7
#define ASCII_38	TKEY_8 + SHIFT_MASK			// 55 8
#define ASCII_39	TKEY_9 + SHIFT_MASK			// 57 9
#define ASCII_3A	TKEY_PERIOD				// 58 :
#define ASCII_3B	TKEY_COMMA				// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_SLASH				// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_M + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_2 + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_Q + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_SEMICOLON + SHIFT_MASK		// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_A + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_Z + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_W + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_RIGHT_BRACE + ALTGR_MASK		// 91 [
#define ASCII_5C	TKEY_NON_US_100 + ALTGR_MASK		// 92
#define ASCII_5D	TKEY_LEFT_BRACE + ALTGR_MASK		// 93 ]
#define ASCII_5E	TKEY_6 + ALTGR_MASK			// 94 ^
#define ASCII_5F	TKEY_EQUAL + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_Q					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_SEMICOLON				// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_A					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_Z					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_W					// 122 z
#define ASCII_7B	TKEY_9 + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_1 + ALTGR_MASK			// 124 |
#define ASCII_7D	TKEY_0 + ALTGR_MASK			// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127
#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_BACKSLASH + SHIFT_MASK		// 163 £     Pound Sign
#define ISO_8859_1_A4	0					// 164 ¤     Currency or Euro Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_6					// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_MINUS + SHIFT_MASK			// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	TKEY_TILDE				// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	TKEY_TILDE + SHIFT_MASK			// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	TKEY_BACKSLASH				// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_Q + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_Q + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS	+ TKEY_Q + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_Q + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_Q + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	TILDE_BITS + TKEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U			// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ISO_8859_1_E0	TKEY_0					// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_Q		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_Q			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_Q			// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_Q			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	TKEY_9					// 231 ç     c CEDILLA
#define ISO_8859_1_E8	TKEY_7					// 232 è     e GRAVE
#define ISO_8859_1_E9	TKEY_2					// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	TILDE_BITS + TKEY_N			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O			// 245 õ     o TILDE
#define ISO_8859_1_F6	DIAERESIS_BITS + TKEY_O			// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	TKEY_QUOTE				// 249 ù     u GRAVE - TODO; check FRENCH
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_E + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_FRENCH_BELGIAN




#ifdef LAYOUT_GERMAN_SWISS

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define GRAVE_ACCENT_BITS	0x0200
#define DIAERESIS_BITS		0x0300
#define TILDE_BITS		0x0400
#define ACUTE_ACCENT_BITS	0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_EQUAL
#define DEADKEY_ACUTE_ACCENT	TKEY_MINUS + ALTGR_MASK
#define DEADKEY_GRAVE_ACCENT	TKEY_EQUAL + SHIFT_MASK
#define DEADKEY_DIAERESIS	TKEY_RIGHT_BRACE
#define DEADKEY_TILDE		TKEY_EQUAL + ALTGR_MASK
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_RIGHT_BRACE + SHIFT_MASK		// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + ALTGR_MASK			// 35 #
#define ASCII_24	TKEY_BACKSLASH				// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_MINUS				// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_3 + SHIFT_MASK			// 42 *
#define ASCII_2B	TKEY_1 + SHIFT_MASK			// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_2 + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Z + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Y + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_LEFT_BRACE + ALTGR_MASK		// 91 [
#define ASCII_5C	TKEY_NON_US_100 + ALTGR_MASK		// 92
#define ASCII_5D	TKEY_RIGHT_BRACE + ALTGR_MASK		// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Z					// 121 y
#define ASCII_7A	TKEY_Y					// 122 z
#define ASCII_7B	TKEY_QUOTE + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_7 + ALTGR_MASK			// 124 |
#define ASCII_7D	TKEY_BACKSLASH + ALTGR_MASK		// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127
#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	TKEY_8 + ALTGR_MASK			// 162 ¢     Cent Sign
#define ISO_8859_1_A3	TKEY_BACKSLASH + SHIFT_MASK		// 163 £     Pound Sign
#define ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	TKEY_1 + ALTGR_MASK			// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_5 + ALTGR_MASK			// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	TKEY_6 + ALTGR_MASK			// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_4 + ALTGR_MASK			// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS	+ TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	TILDE_BITS + TKEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ISO_8859_1_E0	TKEY_QUOTE + SHIFT_MASK			// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_A			// 227 ã     a TILDE
#define ISO_8859_1_E4	TKEY_QUOTE				// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	TKEY_4 + SHIFT_MASK			// 231 ç     c CEDILLA
#define ISO_8859_1_E8	TKEY_LEFT_BRACE + SHIFT_MASK		// 232 è     e GRAVE
#define ISO_8859_1_E9	TKEY_SEMICOLON + SHIFT_MASK		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS  TODO: check this
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	TILDE_BITS + TKEY_N			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O			// 245 õ     o TILDE
#define ISO_8859_1_F6	TKEY_SEMICOLON				// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	TKEY_LEFT_BRACE				// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_E + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_GERMAN_SWISS




#ifdef LAYOUT_FRENCH_SWISS

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define GRAVE_ACCENT_BITS	0x0200
#define DIAERESIS_BITS		0x0300
#define TILDE_BITS		0x0400
#define ACUTE_ACCENT_BITS	0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_EQUAL
#define DEADKEY_ACUTE_ACCENT	TKEY_MINUS + ALTGR_MASK
#define DEADKEY_GRAVE_ACCENT	TKEY_EQUAL + SHIFT_MASK
#define DEADKEY_DIAERESIS	TKEY_RIGHT_BRACE
#define DEADKEY_TILDE		TKEY_EQUAL + ALTGR_MASK
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_RIGHT_BRACE + SHIFT_MASK		// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + ALTGR_MASK			// 35 #
#define ASCII_24	TKEY_BACKSLASH				// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_MINUS				// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_3 + SHIFT_MASK			// 42 *
#define ASCII_2B	TKEY_1 + SHIFT_MASK			// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_2 + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Z + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Y + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_LEFT_BRACE + ALTGR_MASK		// 91 [
#define ASCII_5C	TKEY_NON_US_100 + ALTGR_MASK		// 92
#define ASCII_5D	TKEY_RIGHT_BRACE + ALTGR_MASK		// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Z					// 121 y
#define ASCII_7A	TKEY_Y					// 122 z
#define ASCII_7B	TKEY_QUOTE + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_7 + ALTGR_MASK			// 124 |
#define ASCII_7D	TKEY_BACKSLASH + ALTGR_MASK		// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127
#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	TKEY_8 + ALTGR_MASK			// 162 ¢     Cent Sign
#define ISO_8859_1_A3	TKEY_BACKSLASH + SHIFT_MASK		// 163 £     Pound Sign
#define ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	TKEY_1 + ALTGR_MASK			// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_5 + ALTGR_MASK			// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	TKEY_6 + ALTGR_MASK			// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_4 + ALTGR_MASK			// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS	+ TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	TILDE_BITS + TKEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ISO_8859_1_E0	TKEY_QUOTE				// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_A			// 227 ã     a TILDE
#define ISO_8859_1_E4	TKEY_QUOTE + SHIFT_MASK			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	TKEY_4 + SHIFT_MASK			// 231 ç     c CEDILLA
#define ISO_8859_1_E8	TKEY_LEFT_BRACE				// 232 è     e GRAVE
#define ISO_8859_1_E9	TKEY_SEMICOLON				// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	TILDE_BITS + TKEY_N			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O			// 245 õ     o TILDE
#define ISO_8859_1_F6	TKEY_SEMICOLON + SHIFT_MASK		// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	TKEY_LEFT_BRACE + SHIFT_MASK		// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_E + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_FRENCH_SWISS





#ifdef LAYOUT_SPANISH_LATIN_AMERICA

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define ACUTE_ACCENT_BITS	0x0200
#define GRAVE_ACCENT_BITS	0x0300
#define DIAERESIS_BITS		0x0400
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_QUOTE + ALTGR_MASK
#define DEADKEY_ACUTE_ACCENT	TKEY_LEFT_BRACE
#define DEADKEY_GRAVE_ACCENT	TKEY_BACKSLASH + ALTGR_MASK
#define DEADKEY_DIAERESIS	TKEY_LEFT_BRACE + SHIFT_MASK
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + ALTGR_MASK			// 35 #
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_MINUS				// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_RIGHT_BRACE + SHIFT_MASK		// 42 *
#define ASCII_2B	TKEY_RIGHT_BRACE				// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_Q + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_QUOTE + SHIFT_MASK			// 91 [
#define ASCII_5C	TKEY_MINUS + ALTGR_MASK			// 92
#define ASCII_5D	TKEY_BACKSLASH + SHIFT_MASK		// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_QUOTE				// 123 {
#define ASCII_7C	TKEY_TILDE				// 124 |
#define ASCII_7D	TKEY_BACKSLASH				// 125 }
#define ASCII_7E	TKEY_RIGHT_BRACE + ALTGR_MASK		// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127

#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	TKEY_EQUAL + SHIFT_MASK			// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	0					// 163 £     Pound Sign
#define ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	0					// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	TKEY_TILDE + ALTGR_MASK			// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_TILDE + SHIFT_MASK			// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	TKEY_EQUAL				// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS + TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	TKEY_SEMICOLON + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	0					// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_A			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	ACUTE_ACCENT_BITS + TKEY_E		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	TKEY_SEMICOLON				// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	0					// 245 õ     o TILDE
#define ISO_8859_1_F6	DIAERESIS_BITS + TKEY_O			// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS

#endif // LAYOUT_SPANISH_LATIN_AMERICA



#ifdef LAYOUT_IRISH

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0300
#define GRAVE_ACCENT_BITS	0x0100
#define ACUTE_ACCENT_BITS	0x0200
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x03FF
#define DEADKEY_ACUTE_ACCENT	TKEY_QUOTE + ALTGR_MASK
#define DEADKEY_GRAVE_ACCENT	TKEY_TILDE
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_BACKSPACE				// 35 #
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_7 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_QUOTE				// 39 '
#define ASCII_28	TKEY_9 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_0 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_8 + SHIFT_MASK			// 42 *
#define ASCII_2B	TKEY_EQUAL + SHIFT_MASK			// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_MINUS				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_SLASH				// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_SEMICOLON + SHIFT_MASK		// 58 :
#define ASCII_3B	TKEY_SEMICOLON				// 59 ;
#define ASCII_3C	TKEY_COMMA + SHIFT_MASK			// 60 <
#define ASCII_3D	TKEY_EQUAL				// 61 =
#define ASCII_3E	TKEY_PERIOD + SHIFT_MASK			// 62 >
#define ASCII_3F	TKEY_SLASH + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_QUOTE + SHIFT_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_LEFT_BRACE				// 91 [
#define ASCII_5C	TKEY_NON_US_100				// 92
#define ASCII_5D	TKEY_RIGHT_BRACE				// 93 ]
#define ASCII_5E	TKEY_6 + SHIFT_MASK			// 94 ^
#define ASCII_5F	TKEY_MINUS + SHIFT_MASK			// 95 _
#define ASCII_60	TKEY_QUOTE + SHIFT_MASK + ALTGR_MASK	// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_LEFT_BRACE + SHIFT_MASK		// 123 {
#define ASCII_7C	TKEY_NON_US_100 + SHIFT_MASK		// 124 |
#define ASCII_7D	TKEY_RIGHT_BRACE + SHIFT_MASK		// 125 }
#define ASCII_7E	TKEY_BACKSLASH + SHIFT_MASK		// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127

#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_3 + SHIFT_MASK			// 163 £     Pound Sign
#define ISO_8859_1_A4	0					// 164 ¤     Currency or Euro Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	TKEY_TILDE + ALTGR_MASK			// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	0					// 167 §     SECTION SIGN
#define ISO_8859_1_A8	0					// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	TKEY_TILDE + SHIFT_MASK			// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	0					// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A		// 192 À     A GRAVE
#define ISO_8859_1_C1	TKEY_A + ALTGR_MASK + SHIFT_MASK		// 193 Á     A ACUTE
#define ISO_8859_1_C2	0					// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define ISO_8859_1_C4	0					// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E		// 200 È     E GRAVE
#define ISO_8859_1_C9	TKEY_E + ALTGR_MASK + SHIFT_MASK		// 201 É     E ACUTE
#define ISO_8859_1_CA	0					// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	0					// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I		// 204 Ì     I GRAVE
#define ISO_8859_1_CD	TKEY_I + ALTGR_MASK + SHIFT_MASK		// 205 Í     I ACUTE
#define ISO_8859_1_CE	0					// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	0					// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O		// 210 Ò     O GRAVE
#define ISO_8859_1_D3	TKEY_O + ALTGR_MASK + SHIFT_MASK		// 211 Ó     O ACUTE
#define ISO_8859_1_D4	0					// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define ISO_8859_1_D6	0					// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U		// 217 Ù     U GRAVE
#define ISO_8859_1_DA	TKEY_U + ALTGR_MASK + SHIFT_MASK		// 218 Ú     U ACUTE
#define ISO_8859_1_DB	0					// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	0					// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	TKEY_A + ALTGR_MASK			// 225 á     a ACUTE
#define ISO_8859_1_E2	0					// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	0					// 227 ã     a TILDE
#define ISO_8859_1_E4	0					// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	TKEY_E + ALTGR_MASK			// 233 é     e ACUTE
#define ISO_8859_1_EA	0					// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	0					// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	TKEY_I + ALTGR_MASK			// 237 í     i ACUTE
#define ISO_8859_1_EE	0					// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	0					// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	TKEY_O + ALTGR_MASK			// 243 ó     o ACUTE
#define ISO_8859_1_F4	0					// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	0					// 245 õ     o TILDE
#define ISO_8859_1_F6	0					// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	TKEY_U + ALTGR_MASK			// 250 ú     u ACUTE
#define ISO_8859_1_FB	0					// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	0					// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	0					// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_4 + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_4 + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_IRISH




#ifdef LAYOUT_ICELANDIC

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define ACUTE_ACCENT_BITS	0x0200
#define GRAVE_ACCENT_BITS	0x0300
#define DIAERESIS_BITS		0x0400
#define RING_ABOVE_BITS		0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_QUOTE + ALTGR_MASK
#define DEADKEY_ACUTE_ACCENT	TKEY_QUOTE
#define DEADKEY_GRAVE_ACCENT	TKEY_BACKSLASH + ALTGR_MASK
#define DEADKEY_DIAERESIS	TKEY_TILDE + SHIFT_MASK
#define DEADKEY_RING_ABOVE	TKEY_TILDE
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + SHIFT_MASK			// 35 #
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_QUOTE + SHIFT_MASK			// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_BACKSLASH + SHIFT_MASK		// 42 *
#define ASCII_2B	TKEY_BACKSLASH				// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_EQUAL				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_RIGHT_BRACE + SHIFT_MASK		// 63 ?
#define ASCII_40	TKEY_Q + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_8 + ALTGR_MASK			// 91 [
#define ASCII_5C	TKEY_MINUS + ALTGR_MASK			// 92
#define ASCII_5D	TKEY_9 + ALTGR_MASK			// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_EQUAL + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_7 + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_NON_US_100 + ALTGR_MASK		// 124 |
#define ASCII_7D	TKEY_0 + ALTGR_MASK			// 125 }
#define ASCII_7E	TKEY_RIGHT_BRACE + ALTGR_MASK		// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127

#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	0					// 163 £     Pound Sign
#define ISO_8859_1_A4	0					// 164 ¤     Currency or Euro Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR			??
#define ISO_8859_1_A7	0					// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN			??
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	TKEY_TILDE + ALTGR_MASK			// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	TKEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + ALTGR_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS	+ TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	RING_ABOVE_BITS + TKEY_A + SHIFT_MASK	// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	TKEY_SEMICOLON + SHIFT_MASK		// 198 Æ     AE
#define ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	TKEY_LEFT_BRACE + SHIFT_MASK		// 208 Ð     ETH
#define ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	TKEY_SLASH + SHIFT_MASK			// 222 Þ     THORN
#define ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	0					// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_A			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	RING_ABOVE_BITS + TKEY_A			// 229 å     a RING ABOVE
#define ISO_8859_1_E6	TKEY_SEMICOLON				// 230 æ     ae
#define ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	ACUTE_ACCENT_BITS + TKEY_E		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	TKEY_LEFT_BRACE				// 240 ð     ETH
#define ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	0					// 245 õ     o TILDE
#define ISO_8859_1_F6	DIAERESIS_BITS + TKEY_O			// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	TKEY_SLASH				// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_5 + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_5 + ALTGR_MASK			// 20AC €    Euro Sign

#endif // LAYOUT_ICELANDIC



#ifdef LAYOUT_TURKISH
// http://forum.pjrc.com/threads/18781-Turkish-Language-Support

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0700
#define	CIRCUMFLEX_BITS		0x0100
#define ACUTE_ACCENT_BITS	0x0200
#define GRAVE_ACCENT_BITS	0x0300
#define TILDE_BITS		0x0400
#define DIAERESIS_BITS		0x0500
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x07FF
#define DEADKEY_CIRCUMFLEX	TKEY_3 + SHIFT_MASK
#define DEADKEY_ACUTE_ACCENT	TKEY_SEMICOLON + ALTGR_MASK
#define DEADKEY_GRAVE_ACCENT	TKEY_BACKSLASH + ALTGR_MASK
#define DEADKEY_TILDE		TKEY_RIGHT_BRACE + ALTGR_MASK
#define DEADKEY_DIAERESIS	TKEY_LEFT_BRACE + ALTGR_MASK

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_TILDE				// 34 "
#define ASCII_23	TKEY_3 + ALTGR_MASK			// 35 #
#define ASCII_24	TKEY_4 + ALTGR_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_2 + SHIFT_MASK			// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_MINUS				// 42 *
#define ASCII_2B	TKEY_4 + SHIFT_MASK			// 43 +
#define ASCII_2C	TKEY_BACKSLASH				// 44 ,
#define ASCII_2D	TKEY_EQUAL				// 45 -
#define ASCII_2E	TKEY_SLASH				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_SLASH + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_BACKSLASH + SHIFT_MASK		// 59 ;
#define ASCII_3C	TKEY_TILDE + ALTGR_MASK			// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_1 + ALTGR_MASK			// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_Q + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Y + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Z + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_8 + ALTGR_MASK			// 91 [
#define ASCII_5C	TKEY_MINUS + ALTGR_MASK			// 92
#define ASCII_5D	TKEY_9 + ALTGR_MASK			// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_EQUAL + SHIFT_MASK			// 95 _
#define ASCII_60	GRAVE_ACCENT_BITS + TKEY_SPACE		// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_QUOTE				// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Y					// 121 y
#define ASCII_7A	TKEY_Z					// 122 z
#define ASCII_7B	TKEY_7 + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_EQUAL + ALTGR_MASK			// 124 |
#define ASCII_7D	TKEY_0 + ALTGR_MASK			// 125 }
#define ASCII_7E	TILDE_BITS + TKEY_SPACE			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127

#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ISO_8859_1_A3	TKEY_2 + ALTGR_MASK			// 163 £     Pound Sign
#define ISO_8859_1_A4	0					// 164 ¤     Currency or Euro Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR			??
#define ISO_8859_1_A7	0					// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN			??
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	TKEY_5 + ALTGR_MASK			// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	GRAVE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS	+ TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	TILDE_BITS + TKEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	TKEY_A + ALTGR_MASK			// 198 Æ     AE
#define ISO_8859_1_C7	TKEY_PERIOD + SHIFT_MASK			// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	GRAVE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	GRAVE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	TILDE_BITS + TKEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define ISO_8859_1_D2	GRAVE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	TILDE_BITS + TKEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ISO_8859_1_D6	TKEY_COMMA + SHIFT_MASK			// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	GRAVE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	TKEY_RIGHT_BRACE + SHIFT_MASK		// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	TKEY_S + ALTGR_MASK			// 223 ß     SHARP S
#define ISO_8859_1_E0	GRAVE_ACCENT_BITS + TKEY_A		// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	TILDE_BITS + TKEY_A			// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_A			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	TKEY_PERIOD				// 231 ç     c CEDILLA
#define ISO_8859_1_E8	GRAVE_ACCENT_BITS + TKEY_E		// 232 è     e GRAVE
#define ISO_8859_1_E9	TKEY_TILDE + SHIFT_MASK			// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	GRAVE_ACCENT_BITS + TKEY_I		// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	TILDE_BITS + TKEY_N			// 241 ñ     n TILDE
#define ISO_8859_1_F2	GRAVE_ACCENT_BITS + TKEY_O		// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	TILDE_BITS + TKEY_O 			// 245 õ     o TILDE
#define ISO_8859_1_F6	TKEY_COMMA				// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	GRAVE_ACCENT_BITS + TKEY_U		// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	TKEY_RIGHT_BRACE				// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Y		// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	DIAERESIS_BITS + TKEY_Y			// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign

// not yet implemented
#define UNICODE_EXTRA00	0x20AC
#define KEYCODE_EXTRA00	TKEY_E + ALTGR_MASK			// 20AC €    Euro Sign
#define UNICODE_EXTRA01	0x011E
#define KEYCODE_EXTRA01	TKEY_LEFT_BRACE + SHIFT_MASK		// 011E Ğ    Latin capital letter G with breve
#define UNICODE_EXTRA02	0x011F
#define KEYCODE_EXTRA02 TKEY_LEFT_BRACE				// 011F ğ    Latin small letter g with breve
#define UNICODE_EXTRA03	0x0130
#define KEYCODE_EXTRA03 TKEY_QUOTE + SHIFT_MASK			// 0130 İ    Latin captial letter I with dot above
#define UNICODE_EXTRA04	0x0131
#define KEYCODE_EXTRA04 TKEY_I					// 0131 ı    Latin small letter dotless i
#define UNICODE_EXTRA05	0x015E
#define KEYCODE_EXTRA05 TKEY_SEMICOLON + SHIFT_MASK		// 015E Ş    Latin capital letter S with cedilla
#define UNICODE_EXTRA06	0x0151
#define KEYCODE_EXTRA06 TKEY_SEMICOLON				// 0151 ş    Latin small letter s with cedilla

#endif // LAYOUT_TURKISH



#ifdef LAYOUT_CZECH
// http://forum.pjrc.com/threads/24495-Czech-keyboard

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0F00
#define ACUTE_ACCENT_BITS	0x0100  // TODO: the Czech might not support some
#define DEGREE_SIGN_BITS	0x0200  // of these deadkeys, perhaps not any???
#define CARON_BITS		0x0300
//#define CIRCUMFLEX_BITS	0x0400
#define BREVE_BITS		0x0500
#define OGONEK_BITS		0x0600
//#define GRAVE_ACCENT_BITS	0x0700
#define DOT_ABOVE_BITS		0x0800
#define DOUBLE_ACUTE_BITS	0x0900
//#define DIAERESIS_BITS	0x0A00
#define CEDILLA_BITS		0x0B00
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x0FFF
#define DEADKEY_ACUTE_ACCENT	TKEY_EQUAL  // TODO: is it TKEY_9 + ALTGR_MASK
#define DEADKEY_DEGREE_SIGN	TKEY_TILDE + SHIFT_MASK // TODO: is it TKEY_5 + ALTGR_MASK
#define DEADKEY_CARON		TKEY_EQUAL + SHIFT_MASK // TODO: is it TKEY_2 + ALTGR_MASK
//#define DEADKEY_CIRCUMFLEX	TKEY_3 + ALTGR_MASK
#define DEADKEY_BREVE		TKEY_4 + ALTGR_MASK
#define DEADKEY_OGONEK		TKEY_6 + ALTGR_MASK
//#define DEADKEY_GRAVE_ACCENT	TKEY_7 + ALTGR_MASK
#define DEADKEY_DOT_ABOVE	TKEY_8 + ALTGR_MASK
#define DEADKEY_DOUBLE_ACUTE	TKEY_0 + ALTGR_MASK
#define DEADKEY_DIAERESIS	TKEY_MINUS + ALTGR_MASK
#define DEADKEY_CEDILLA		TKEY_EQUAL + ALTGR_MASK
#define TKEY_NON_US_100		63
#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_QUOTE + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_SEMICOLON + SHIFT_MASK		// 34 "
#define ASCII_23	TKEY_X + ALTGR_MASK			// 35 #
#define ASCII_24	TKEY_SEMICOLON + ALTGR_MASK		// 36 $
#define ASCII_25	TKEY_MINUS + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_C + ALTGR_MASK			// 38 &
#define ASCII_27	TKEY_BACKSLASH + SHIFT_MASK		// 39 '
#define ASCII_28	TKEY_RIGHT_BRACE + SHIFT_MASK		// 40 (
#define ASCII_29	TKEY_RIGHT_BRACE				// 41 )
#define ASCII_2A	TKEY_SLASH + ALTGR_MASK			// 42 *
#define ASCII_2B	TKEY_1					// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_LEFT_BRACE + SHIFT_MASK		// 47 /
#define ASCII_30	TKEY_0 + SHIFT_MASK			// 48 0
#define ASCII_31	TKEY_1 + SHIFT_MASK			// 49 1
#define ASCII_32	TKEY_2 + SHIFT_MASK			// 50 2
#define ASCII_33	TKEY_3 + SHIFT_MASK			// 51 3
#define ASCII_34	TKEY_4 + SHIFT_MASK			// 52 4
#define ASCII_35	TKEY_5 + SHIFT_MASK			// 53 5
#define ASCII_36	TKEY_6 + SHIFT_MASK			// 54 6
#define ASCII_37	TKEY_7 + SHIFT_MASK			// 55 7
#define ASCII_38	TKEY_8 + SHIFT_MASK			// 55 8
#define ASCII_39	TKEY_9 + SHIFT_MASK			// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_TILDE				// 59 ;
#define ASCII_3C	TKEY_COMMA + ALTGR_MASK			// 60 <
#define ASCII_3D	TKEY_MINUS				// 61 =
#define ASCII_3E	TKEY_PERIOD + ALTGR_MASK			// 62 >
#define ASCII_3F	TKEY_COMMA + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_V + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Z + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Y + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_F + ALTGR_MASK			// 91 [
#define ASCII_5C	TKEY_NON_US_100				// 92
#define ASCII_5D	TKEY_G + ALTGR_MASK			// 93 ]
#define ASCII_5E	TKEY_3 + ALTGR_MASK			// 94 ^  TODO: testme
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _
#define ASCII_60	TKEY_7 + ALTGR_MASK			// 96 `  TODO: testme
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Z					// 121 y
#define ASCII_7A	TKEY_Y					// 122 z
#define ASCII_7B	TKEY_B + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_NON_US_100 + SHIFT_MASK		// 124 |
#define ASCII_7D	TKEY_N + ALTGR_MASK			// 125 }
#define ASCII_7E	TKEY_1 + ALTGR_MASK			// 126 ~  TODO: fixme
#define ASCII_7F	TKEY_BACKSPACE				// 127
#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent Sign
#define ISO_8859_1_A3	0					// 163 £     Pound Sign
#define ISO_8859_1_A4	TKEY_BACKSLASH + ALTGR_MASK		// 164 ¤     Currency Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_QUOTE				// 167 §     SECTION SIGN
#define ISO_8859_1_A8	0					// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	DEGREE_SIGN_BITS + TKEY_SPACE		// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	CEDILLA_BITS + TKEY_SPACE		// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	0					// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	0					// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define ISO_8859_1_C4	0					// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	CEDILLA_BITS + TKEY_C + SHIFT_MASK	// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	0					// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	0					// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	0					// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	0					// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	0					// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	0					// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define ISO_8859_1_D2	0					// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	0					// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define ISO_8859_1_D6	0					// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	TKEY_RIGHT_BRACE + ALTGR_MASK		// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	0					// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	0					// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	0					// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Z + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	TKEY_QUOTE + ALTGR_MASK			// 223 ß     SHARP S  TODO: testme
#define ISO_8859_1_E0	0					// 224 à     a GRAVE
#define ISO_8859_1_E1	TKEY_8					// 225 á     a ACUTE
#define ISO_8859_1_E2	0					// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	0					// 227 ã     a TILDE
#define ISO_8859_1_E4	0					// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	CEDILLA_BITS + TKEY_C			// 231 ç     c CEDILLA
#define ISO_8859_1_E8	0					// 232 è     e GRAVE
#define ISO_8859_1_E9	TKEY_0					// 233 é     e ACUTE
#define ISO_8859_1_EA	0					// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	0					// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	0					// 236 ì     i GRAVE
#define ISO_8859_1_ED	TKEY_9					// 237 í     i ACUTE
#define ISO_8859_1_EE	0					// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	0					// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define ISO_8859_1_F2	0					// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	0					// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	0					// 245 õ     o TILDE
#define ISO_8859_1_F6	0					// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	TKEY_LEFT_BRACE + ALTGR_MASK		// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	0					// 249 ù     u GRAVE
#define ISO_8859_1_FA	TKEY_LEFT_BRACE				// 250 ú     u ACUTE
#define ISO_8859_1_FB	0					// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	0					// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	TKEY_7					// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	0					// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign

#define UNICODE_EXTRA00	0x011B	// ě  Small Letter E with caron
#define KEYCODE_EXTRA00 TKEY_2
#define UNICODE_EXTRA01	0x0161	// š  Small Letter S with caron
#define KEYCODE_EXTRA01 TKEY_3
#define UNICODE_EXTRA02	0x010D	// č  Small Letter C with caron
#define KEYCODE_EXTRA02 TKEY_4
#define UNICODE_EXTRA03	0x0159	// ř  Small Letter R with caron
#define KEYCODE_EXTRA03 TKEY_5
#define UNICODE_EXTRA04	0x017E	// ž  Small Letter Z with caron
#define KEYCODE_EXTRA04 TKEY_6
#define UNICODE_EXTRA05	0x016F	// ů  Small Letter U with ring above
#define KEYCODE_EXTRA05 TKEY_SEMICOLON
#define UNICODE_EXTRA06	0x0111	// đ  Small Letter D with stroke
#define KEYCODE_EXTRA06 TKEY_S + ALTGR_MASK
#define UNICODE_EXTRA07	0x0110	// Đ  Capital Letter D with stroke
#define KEYCODE_EXTRA07 TKEY_D + ALTGR_MASK
#define UNICODE_EXTRA08	0x0142	// ł  Small Letter L with stroke
#define KEYCODE_EXTRA08 TKEY_K + ALTGR_MASK
#define UNICODE_EXTRA09	0x0141	// Ł  Capital Letter L with stroke
#define KEYCODE_EXTRA09 TKEY_L + ALTGR_MASK
#define UNICODE_EXTRA0A	0x20AC	// €  Euro Sign
#define KEYCODE_EXTRA0A	TKEY_E + ALTGR_MASK

#endif // LAYOUT_CZECH


#ifdef LAYOUT_SERBIAN_LATIN_ONLY
// http://forum.pjrc.com/threads/27032-Serbian-Keyboard-Layout

#define SHIFT_MASK		0x0040
#define ALTGR_MASK		0x0080
#define DEADKEYS_MASK		0x0F00
#define CEDILLA_BITS		0x0100
#define CARON_BITS		0x0200
#define CIRCUMFLEX_BITS		0x0300
#define BREVE_BITS		0x0400
#define DEGREE_SIGN_BITS	0x0500
#define OGONEK_BITS		0x0600
#define DOT_ABOVE_BITS		0x0700
#define ACUTE_ACCENT_BITS	0x0800
#define DOUBLE_ACUTE_BITS	0x0900
#define DIAERESIS_BITS		0x0A00
#define KEYCODE_TYPE		uint16_t
#define KEYCODE_MASK		0x0FFF
#define DEADKEY_CEDILLA		TKEY_TILDE
#define DEADKEY_CARON		TKEY_2 + ALTGR_MASK
#define DEADKEY_CIRCUMFLEX	TKEY_3 + ALTGR_MASK
#define DEADKEY_BREVE		TKEY_4 + ALTGR_MASK
#define DEADKEY_DEGREE_SIGN	TKEY_5 + ALTGR_MASK
#define DEADKEY_OGONEK		TKEY_6 + ALTGR_MASK
#define DEADKEY_DOT_ABOVE	TKEY_8 + ALTGR_MASK
#define DEADKEY_ACUTE_ACCENT	TKEY_9 + ALTGR_MASK
#define DEADKEY_DOUBLE_ACUTE	TKEY_0 + ALTGR_MASK
#define DEADKEY_DIAERESIS	TKEY_MINUS + ALTGR_MASK
//#define DEADKEY_CEDILLA	TKEY_EQUAL + ALTGR_MASK <-- TODO: why are there 2 Cedilla deadkeys?
#define TKEY_NON_US_100		63

#define ASCII_20	TKEY_SPACE				// 32
#define ASCII_21	TKEY_1 + SHIFT_MASK			// 33 !
#define ASCII_22	TKEY_2 + SHIFT_MASK			// 34 "
#define ASCII_23	TKEY_3 + SHIFT_MASK			// 35 #
#define ASCII_24	TKEY_4 + SHIFT_MASK			// 36 $
#define ASCII_25	TKEY_5 + SHIFT_MASK			// 37 %
#define ASCII_26	TKEY_6 + SHIFT_MASK			// 38 &
#define ASCII_27	TKEY_MINUS				// 39 '
#define ASCII_28	TKEY_8 + SHIFT_MASK			// 40 (
#define ASCII_29	TKEY_9 + SHIFT_MASK			// 41 )
#define ASCII_2A	TKEY_EQUAL + SHIFT_MASK			// 42 *
#define ASCII_2B	TKEY_EQUAL				// 43 +
#define ASCII_2C	TKEY_COMMA				// 44 ,
#define ASCII_2D	TKEY_SLASH				// 45 -  TODO: verify
#define ASCII_2E	TKEY_PERIOD				// 46 .
#define ASCII_2F	TKEY_7 + SHIFT_MASK			// 47 /
#define ASCII_30	TKEY_0					// 48 0
#define ASCII_31	TKEY_1					// 49 1
#define ASCII_32	TKEY_2					// 50 2
#define ASCII_33	TKEY_3					// 51 3
#define ASCII_34	TKEY_4					// 52 4
#define ASCII_35	TKEY_5					// 53 5
#define ASCII_36	TKEY_6					// 54 6
#define ASCII_37	TKEY_7					// 55 7
#define ASCII_38	TKEY_8					// 55 8
#define ASCII_39	TKEY_9					// 57 9
#define ASCII_3A	TKEY_PERIOD + SHIFT_MASK			// 58 :
#define ASCII_3B	TKEY_COMMA + SHIFT_MASK			// 59 ;
#define ASCII_3C	TKEY_NON_US_100				// 60 <
#define ASCII_3D	TKEY_0 + SHIFT_MASK			// 61 =
#define ASCII_3E	TKEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ASCII_3F	TKEY_MINUS + SHIFT_MASK			// 63 ?
#define ASCII_40	TKEY_V + ALTGR_MASK			// 64 @
#define ASCII_41	TKEY_A + SHIFT_MASK			// 65 A
#define ASCII_42	TKEY_B + SHIFT_MASK			// 66 B
#define ASCII_43	TKEY_C + SHIFT_MASK			// 67 C
#define ASCII_44	TKEY_D + SHIFT_MASK			// 68 D
#define ASCII_45	TKEY_E + SHIFT_MASK			// 69 E
#define ASCII_46	TKEY_F + SHIFT_MASK			// 70 F
#define ASCII_47	TKEY_G + SHIFT_MASK			// 71 G
#define ASCII_48	TKEY_H + SHIFT_MASK			// 72 H
#define ASCII_49	TKEY_I + SHIFT_MASK			// 73 I
#define ASCII_4A	TKEY_J + SHIFT_MASK			// 74 J
#define ASCII_4B	TKEY_K + SHIFT_MASK			// 75 K
#define ASCII_4C	TKEY_L + SHIFT_MASK			// 76 L
#define ASCII_4D	TKEY_M + SHIFT_MASK			// 77 M
#define ASCII_4E	TKEY_N + SHIFT_MASK			// 78 N
#define ASCII_4F	TKEY_O + SHIFT_MASK			// 79 O
#define ASCII_50	TKEY_P + SHIFT_MASK			// 80 P
#define ASCII_51	TKEY_Q + SHIFT_MASK			// 81 Q
#define ASCII_52	TKEY_R + SHIFT_MASK			// 82 R
#define ASCII_53	TKEY_S + SHIFT_MASK			// 83 S
#define ASCII_54	TKEY_T + SHIFT_MASK			// 84 T
#define ASCII_55	TKEY_U + SHIFT_MASK			// 85 U
#define ASCII_56	TKEY_V + SHIFT_MASK			// 86 V
#define ASCII_57	TKEY_W + SHIFT_MASK			// 87 W
#define ASCII_58	TKEY_X + SHIFT_MASK			// 88 X
#define ASCII_59	TKEY_Z + SHIFT_MASK			// 89 Y
#define ASCII_5A	TKEY_Y + SHIFT_MASK			// 90 Z
#define ASCII_5B	TKEY_F + ALTGR_MASK			// 91 [
#define ASCII_5C	TKEY_Q + ALTGR_MASK			// 92
#define ASCII_5D	TKEY_G + ALTGR_MASK			// 93 ]
#define ASCII_5E	CIRCUMFLEX_BITS + TKEY_SPACE		// 94 ^
#define ASCII_5F	TKEY_SLASH + SHIFT_MASK			// 95 _   TODO: verify
#define ASCII_60	TKEY_7 + ALTGR_MASK			// 96 `
#define ASCII_61	TKEY_A					// 97 a
#define ASCII_62	TKEY_B					// 98 b
#define ASCII_63	TKEY_C					// 99 c
#define ASCII_64	TKEY_D					// 100 d
#define ASCII_65	TKEY_E					// 101 e
#define ASCII_66	TKEY_F					// 102 f
#define ASCII_67	TKEY_G					// 103 g
#define ASCII_68	TKEY_H					// 104 h
#define ASCII_69	TKEY_I					// 105 i
#define ASCII_6A	TKEY_J					// 106 j
#define ASCII_6B	TKEY_K					// 107 k
#define ASCII_6C	TKEY_L					// 108 l
#define ASCII_6D	TKEY_M					// 109 m
#define ASCII_6E	TKEY_N					// 110 n
#define ASCII_6F	TKEY_O					// 111 o
#define ASCII_70	TKEY_P					// 112 p
#define ASCII_71	TKEY_Q					// 113 q
#define ASCII_72	TKEY_R					// 114 r
#define ASCII_73	TKEY_S					// 115 s
#define ASCII_74	TKEY_T					// 116 t
#define ASCII_75	TKEY_U					// 117 u
#define ASCII_76	TKEY_V					// 118 v
#define ASCII_77	TKEY_W					// 119 w
#define ASCII_78	TKEY_X					// 120 x
#define ASCII_79	TKEY_Z					// 121 y
#define ASCII_7A	TKEY_Y					// 122 z
#define ASCII_7B	TKEY_B + ALTGR_MASK			// 123 {
#define ASCII_7C	TKEY_W + ALTGR_MASK			// 124 |
#define ASCII_7D	TKEY_N + ALTGR_MASK			// 125 }
#define ASCII_7E	TKEY_1 + ALTGR_MASK			// 126 ~
#define ASCII_7F	TKEY_BACKSPACE				// 127
#define ISO_8859_1_A0	TKEY_SPACE				// 160       Nonbreakng Space
#define ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define ISO_8859_1_A2	0					// 162 ¢     Cent Sign
#define ISO_8859_1_A3	0					// 163 £     Pound Sign
#define ISO_8859_1_A4	TKEY_BACKSLASH + ALTGR_MASK		// 164 ¤     Currency Sign
#define ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ISO_8859_1_A7	TKEY_M + ALTGR_MASK			// 167 §     SECTION SIGN
#define ISO_8859_1_A8	DIAERESIS_BITS + TKEY_SPACE		// 168 ¨     DIAERESIS
#define ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ISO_8859_1_B0	DEGREE_SIGN_BITS + TKEY_SPACE		// 176 °     DEGREE SIGN
#define ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ISO_8859_1_B4	ACUTE_ACCENT_BITS + TKEY_SPACE		// 180 ´     ACUTE ACCENT
#define ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ISO_8859_1_B8	CEDILLA_BITS + TKEY_SPACE		// 184 ¸     CEDILLA
#define ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define ISO_8859_1_C0	0					// 192 À     A GRAVE
#define ISO_8859_1_C1	ACUTE_ACCENT_BITS + TKEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ISO_8859_1_C2	CIRCUMFLEX_BITS	+ TKEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define ISO_8859_1_C4	DIAERESIS_BITS + TKEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ISO_8859_1_C6	0					// 198 Æ     AE
#define ISO_8859_1_C7	CEDILLA_BITS + TKEY_C + SHIFT_MASK	// 199 Ç     C CEDILLA
#define ISO_8859_1_C8	0					// 200 È     E GRAVE
#define ISO_8859_1_C9	ACUTE_ACCENT_BITS + TKEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ISO_8859_1_CA	CIRCUMFLEX_BITS + TKEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ISO_8859_1_CB	DIAERESIS_BITS + TKEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ISO_8859_1_CC	0					// 204 Ì     I GRAVE
#define ISO_8859_1_CD	ACUTE_ACCENT_BITS + TKEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ISO_8859_1_CE	CIRCUMFLEX_BITS + TKEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ISO_8859_1_CF	DIAERESIS_BITS + TKEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ISO_8859_1_D0	0					// 208 Ð     ETH
#define ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define ISO_8859_1_D2	0					// 210 Ò     O GRAVE
#define ISO_8859_1_D3	ACUTE_ACCENT_BITS + TKEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ISO_8859_1_D4	CIRCUMFLEX_BITS + TKEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define ISO_8859_1_D6	DIAERESIS_BITS + TKEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ISO_8859_1_D7	TKEY_RIGHT_BRACE + ALTGR_MASK		// 215 ×     MULTIPLICATION
#define ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ISO_8859_1_D9	0					// 217 Ù     U GRAVE
#define ISO_8859_1_DA	ACUTE_ACCENT_BITS + TKEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ISO_8859_1_DB	CIRCUMFLEX_BITS + TKEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ISO_8859_1_DC	DIAERESIS_BITS + TKEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ISO_8859_1_DD	ACUTE_ACCENT_BITS + TKEY_Z + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ISO_8859_1_DE	0					// 222 Þ     THORN
#define ISO_8859_1_DF	TKEY_QUOTE + ALTGR_MASK			// 223 ß     SHARP S
#define ISO_8859_1_E0	0					// 224 à     a GRAVE
#define ISO_8859_1_E1	ACUTE_ACCENT_BITS + TKEY_A		// 225 á     a ACUTE
#define ISO_8859_1_E2	CIRCUMFLEX_BITS + TKEY_A			// 226 â     a CIRCUMFLEX
#define ISO_8859_1_E3	0					// 227 ã     a TILDE
#define ISO_8859_1_E4	DIAERESIS_BITS + TKEY_A			// 228 ä     a DIAERESIS
#define ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ISO_8859_1_E6	0					// 230 æ     ae
#define ISO_8859_1_E7	CEDILLA_BITS + TKEY_C			// 231 ç     c CEDILLA
#define ISO_8859_1_E8	0					// 232 è     e GRAVE
#define ISO_8859_1_E9	ACUTE_ACCENT_BITS + TKEY_E		// 233 é     e ACUTE
#define ISO_8859_1_EA	CIRCUMFLEX_BITS + TKEY_E			// 234 ê     e CIRCUMFLEX
#define ISO_8859_1_EB	DIAERESIS_BITS + TKEY_E			// 235 ë     e DIAERESIS
#define ISO_8859_1_EC	0					// 236 ì     i GRAVE
#define ISO_8859_1_ED	ACUTE_ACCENT_BITS + TKEY_I		// 237 í     i ACUTE
#define ISO_8859_1_EE	CIRCUMFLEX_BITS + TKEY_I			// 238 î     i CIRCUMFLEX
#define ISO_8859_1_EF	DIAERESIS_BITS + TKEY_I			// 239 ï     i DIAERESIS
#define ISO_8859_1_F0	0					// 240 ð     ETH
#define ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define ISO_8859_1_F2	0					// 242 ò     o GRAVE
#define ISO_8859_1_F3	ACUTE_ACCENT_BITS + TKEY_O		// 243 ó     o ACUTE
#define ISO_8859_1_F4	CIRCUMFLEX_BITS + TKEY_O			// 244 ô     o CIRCUMFLEX
#define ISO_8859_1_F5	0					// 245 õ     o TILDE
#define ISO_8859_1_F6	DIAERESIS_BITS + TKEY_O			// 246 ö     o DIAERESIS
#define ISO_8859_1_F7	TKEY_LEFT_BRACE + ALTGR_MASK		// 247 ÷     DIVISION
#define ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ISO_8859_1_F9	0					// 249 ù     u GRAVE
#define ISO_8859_1_FA	ACUTE_ACCENT_BITS + TKEY_U		// 250 ú     u ACUTE
#define ISO_8859_1_FB	CIRCUMFLEX_BITS + TKEY_U			// 251 û     u CIRCUMFLEX
#define ISO_8859_1_FC	DIAERESIS_BITS + TKEY_U			// 252 ü     u DIAERESIS
#define ISO_8859_1_FD	ACUTE_ACCENT_BITS + TKEY_Z		// 253 ý     y ACUTE
#define ISO_8859_1_FE	0					// 254 þ     THORN
#define ISO_8859_1_FF	0					// 255 ÿ     y DIAERESIS
#define UNICODE_20AC	TKEY_E + ALTGR_MASK			//     €     Euro Sign

#define UNICODE_EXTRA00	0x0160 // S caron
#define KEYCODE_EXTRA00	TKEY_LEFT_BRACE + SHIFT_MASK
#define UNICODE_EXTRA01	0x0161 // s caron
#define KEYCODE_EXTRA01	TKEY_LEFT_BRACE
#define UNICODE_EXTRA02	0x0110 // D with stroke
#define KEYCODE_EXTRA02	TKEY_RIGHT_BRACE + SHIFT_MASK
#define UNICODE_EXTRA03	0x0111 // d with stroke
#define KEYCODE_EXTRA03	TKEY_RIGHT_BRACE
#define UNICODE_EXTRA04	0x010C // C with caron
#define KEYCODE_EXTRA04	TKEY_SEMICOLON + SHIFT_MASK
#define UNICODE_EXTRA05	0x010D // c with caron
#define KEYCODE_EXTRA05 TKEY_SEMICOLON
#define UNICODE_EXTRA06	0x0106 // C with acute
#define KEYCODE_EXTRA06 TKEY_QUOTE + SHIFT_MASK
#define UNICODE_EXTRA07	0x0107 // c with acute
#define KEYCODE_EXTRA07 TKEY_QUOTE
#define UNICODE_EXTRA08	0x017D // Z with caron
#define KEYCODE_EXTRA08	TKEY_BACKSLASH + SHIFT_MASK
#define UNICODE_EXTRA09	0x017E // z with caron
#define KEYCODE_EXTRA09	TKEY_BACKSLASH

#define UNICODE_EXTRA10	0x0141 // L with stroke
#define KEYCODE_EXTRA10 TKEY_L + ALTGR_MASK
#define UNICODE_EXTRA11	0x0142 // l with stroke
#define KEYCODE_EXTRA11 TKEY_K + ALTGR_MASK
#define UNICODE_EXTRA12	0x010E // D with caron
#define KEYCODE_EXTRA12 CARON_BITS + TKEY_D + SHIFT_MASK
#define UNICODE_EXTRA13	0x010F // d with caron
#define KEYCODE_EXTRA13 CARON_BITS + TKEY_D
#define UNICODE_EXTRA14	0x011A // E with caron
#define KEYCODE_EXTRA14 CARON_BITS + TKEY_E + SHIFT_MASK
#define UNICODE_EXTRA15	0x011B // e with caron
#define KEYCODE_EXTRA15 CARON_BITS + TKEY_E
#define UNICODE_EXTRA16	0x013D // L with caron
#define KEYCODE_EXTRA16 CARON_BITS + TKEY_L + SHIFT_MASK
#define UNICODE_EXTRA17	0x013E // l with caron
#define KEYCODE_EXTRA17 CARON_BITS + TKEY_L
#define UNICODE_EXTRA18	0x0147 // N with caron
#define KEYCODE_EXTRA18 CARON_BITS + TKEY_N + SHIFT_MASK
#define UNICODE_EXTRA19	0x0148 // n with caron
#define KEYCODE_EXTRA19 CARON_BITS + TKEY_N

#define UNICODE_EXTRA20	0x0158 // R with caron
#define KEYCODE_EXTRA20 CARON_BITS + TKEY_R + SHIFT_MASK
#define UNICODE_EXTRA21	0x0159 // r with caron
#define KEYCODE_EXTRA21 CARON_BITS + TKEY_R
#define UNICODE_EXTRA22	0x0164 // T with caron
#define KEYCODE_EXTRA22 CARON_BITS + TKEY_T + SHIFT_MASK
#define UNICODE_EXTRA23	0x0165 // t with caron
#define KEYCODE_EXTRA23 CARON_BITS + TKEY_T
#define UNICODE_EXTRA24	0x0102 // A with breve
#define KEYCODE_EXTRA24 BREVE_BITS + TKEY_A + SHIFT_MASK
#define UNICODE_EXTRA25	0x0103 // a with breve
#define KEYCODE_EXTRA25 BREVE_BITS + TKEY_A
#define UNICODE_EXTRA26	0x016E // U with ring above  TODO: verify
#define KEYCODE_EXTRA26 DEADKEY_DEGREE_SIGN + TKEY_U + SHIFT_MASK
#define UNICODE_EXTRA27	0x016F // u with ring above  TODO: verify
#define KEYCODE_EXTRA27 DEADKEY_DEGREE_SIGN + TKEY_U
#define UNICODE_EXTRA28	0x0104 // A with ogonek
#define KEYCODE_EXTRA28 OGONEK_BITS + TKEY_A + SHIFT_MASK
#define UNICODE_EXTRA29	0x0105 // a with ogonek
#define KEYCODE_EXTRA29 OGONEK_BITS + TKEY_A

#define UNICODE_EXTRA30	0x0118 // E with ogonek
#define KEYCODE_EXTRA30 OGONEK_BITS + TKEY_E + SHIFT_MASK
#define UNICODE_EXTRA31	0x0119 // e with ogonek
#define KEYCODE_EXTRA31 OGONEK_BITS + TKEY_E
#define UNICODE_EXTRA32	0x017B // Z with dot above
#define KEYCODE_EXTRA32 DEADKEY_DOT_ABOVE + TKEY_Z + SHIFT_MASK
#define UNICODE_EXTRA33	0x017C // z with dot above
#define KEYCODE_EXTRA33 DEADKEY_DOT_ABOVE + TKEY_Z
#define UNICODE_EXTRA34	0x0139 // L with acute
#define KEYCODE_EXTRA34 ACUTE_ACCENT_BITS + TKEY_L + SHIFT_MASK
#define UNICODE_EXTRA35	0x013A // l with acute
#define KEYCODE_EXTRA35 ACUTE_ACCENT_BITS + TKEY_L
#define UNICODE_EXTRA36	0x0143 // N with acute
#define KEYCODE_EXTRA36 ACUTE_ACCENT_BITS + TKEY_N + SHIFT_MASK
#define UNICODE_EXTRA37	0x0144 // n with acute
#define KEYCODE_EXTRA37 ACUTE_ACCENT_BITS + TKEY_N
#define UNICODE_EXTRA38	0x0154 // R with acute
#define KEYCODE_EXTRA38 ACUTE_ACCENT_BITS + TKEY_R + SHIFT_MASK
#define UNICODE_EXTRA39	0x0155 // r with acute
#define KEYCODE_EXTRA39 ACUTE_ACCENT_BITS + TKEY_R

#define UNICODE_EXTRA40	0x015A // S with acute
#define KEYCODE_EXTRA40 ACUTE_ACCENT_BITS + TKEY_S + SHIFT_MASK
#define UNICODE_EXTRA41	0x015B // s with acute
#define KEYCODE_EXTRA41 ACUTE_ACCENT_BITS + TKEY_S
#define UNICODE_EXTRA42	0x0179 // Z with acute
#define KEYCODE_EXTRA42 ACUTE_ACCENT_BITS + TKEY_Z + SHIFT_MASK
#define UNICODE_EXTRA43	0x017A // z with acute
#define KEYCODE_EXTRA43 ACUTE_ACCENT_BITS + TKEY_Z
#define UNICODE_EXTRA44	0x0150 // O with double acute
#define KEYCODE_EXTRA44 DOUBLE_ACUTE_BITS + TKEY_O + SHIFT_MASK
#define UNICODE_EXTRA45	0x0151 // o with double acute
#define KEYCODE_EXTRA45 DOUBLE_ACUTE_BITS + TKEY_O
#define UNICODE_EXTRA46	0x0170 // U with double acute
#define KEYCODE_EXTRA46 DOUBLE_ACUTE_BITS + TKEY_u + SHIFT_MASK
#define UNICODE_EXTRA47	0x0171 // u with double acute
#define KEYCODE_EXTRA47 DOUBLE_ACUTE_BITS + TKEY_u
#define UNICODE_EXTRA48	0x015E // S with cedilla
#define KEYCODE_EXTRA48 CEDILLA_BITS + TKEY_S + SHIFT_MASK
#define UNICODE_EXTRA49	0x015F // s with cedilla
#define KEYCODE_EXTRA49 CEDILLA_BITS + TKEY_S

#define UNICODE_EXTRA50	0x201A // single low quote
#define KEYCODE_EXTRA50 TKEY_TILDE
#define UNICODE_EXTRA51	0x20AC // euro sign
#define KEYCODE_EXTRA51 TKEY_E + ALTGR_MASK

#endif // LAYOUT_SERBIAN_LATIN_ONLY




extern const KEYCODE_TYPE keycodes_ascii[];
extern const KEYCODE_TYPE keycodes_iso_8859_1[];

#ifdef __cplusplus
} // extern "C"
#endif

#endif
