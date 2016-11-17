// Created on 2016-11-17 01:09:31.151808

const byte KEY_COMBOS_NO = 64;

const uint16_t keycodesLetterMode[KEY_COMBOS_NO] PROGMEM = {
	'\0',					// 0b00000000 (0)
	'a',					// 0b00000001 (1)
	',',					// 0b00000010 (2)
	'b',					// 0b00000011 (3)
	'\0',					// 0b00000100 (4)
	'k',					// 0b00000101 (5)
	';',					// 0b00000110 (6)
	'l',					// 0b00000111 (7)
	'\0',					// 0b00001000 (8)
	'c',					// 0b00001001 (9)
	'i',					// 0b00001010 (10)
	'f',					// 0b00001011 (11)
	'\0',					// 0b00001100 (12)
	'm',					// 0b00001101 (13)
	's',					// 0b00001110 (14)
	'p',					// 0b00001111 (15)
	'\0',					// 0b00010000 (16)
	'e',					// 0b00010001 (17)
	'\0',					// 0b00010010 (18)
	'h',					// 0b00010011 (19)
	'\0',					// 0b00010100 (20)
	'o',					// 0b00010101 (21)
	'!',					// 0b00010110 (22)
	'r',					// 0b00010111 (23)
	'\0',					// 0b00011000 (24)
	'd',					// 0b00011001 (25)
	'j',					// 0b00011010 (26)
	'g',					// 0b00011011 (27)
	'\0',					// 0b00011100 (28)
	'n',					// 0b00011101 (29)
	't',					// 0b00011110 (30)
	'q',					// 0b00011111 (31)
	'\0',					// 0b00100000 (32)
	'\0',					// 0b00100001 (33)
	'?',					// 0b00100010 (34)
	'\0',					// 0b00100011 (35)
	'-',					// 0b00100100 (36)
	'u',					// 0b00100101 (37)
	'\0',					// 0b00100110 (38)
	'v',					// 0b00100111 (39)
	TKEY_MODE_UPPERCASE,					// 0b00101000 (40)
	'\0',					// 0b00101001 (41)
	'\0',					// 0b00101010 (42)
	'\0',					// 0b00101011 (43)
	'\0',					// 0b00101100 (44)
	'x',					// 0b00101101 (45)
	'\0',					// 0b00101110 (46)
	'\0',					// 0b00101111 (47)
	'\0',					// 0b00110000 (48)
	'\0',					// 0b00110001 (49)
	'.',					// 0b00110010 (50)
	'\0',					// 0b00110011 (51)
	'\"',					// 0b00110100 (52)
	'z',					// 0b00110101 (53)
	'\0',					// 0b00110110 (54)
	'\0',					// 0b00110111 (55)
	'\0',					// 0b00111000 (56)
	'\0',					// 0b00111001 (57)
	'w',					// 0b00111010 (58)
	'\0',					// 0b00111011 (59)
	TKEY_MODE_NUMBERS,					// 0b00111100 (60)
	'y',					// 0b00111101 (61)
	'\0',					// 0b00111110 (62)
	'\0',					// 0b00111111 (63)
};

const uint16_t keycodesNumberMode[KEY_COMBOS_NO] PROGMEM = {
	'\0',					// 0b00000000 (0)
	'1',					// 0b00000001 (1)
	'\0',					// 0b00000010 (2)
	'2',					// 0b00000011 (3)
	'\0',					// 0b00000100 (4)
	'\0',					// 0b00000101 (5)
	'\0',					// 0b00000110 (6)
	'\0',					// 0b00000111 (7)
	'\0',					// 0b00001000 (8)
	'3',					// 0b00001001 (9)
	'9',					// 0b00001010 (10)
	'6',					// 0b00001011 (11)
	'\0',					// 0b00001100 (12)
	'\0',					// 0b00001101 (13)
	'\0',					// 0b00001110 (14)
	'\0',					// 0b00001111 (15)
	'\0',					// 0b00010000 (16)
	'5',					// 0b00010001 (17)
	'\0',					// 0b00010010 (18)
	'8',					// 0b00010011 (19)
	'\0',					// 0b00010100 (20)
	'\0',					// 0b00010101 (21)
	'\0',					// 0b00010110 (22)
	'\0',					// 0b00010111 (23)
	'\0',					// 0b00011000 (24)
	'4',					// 0b00011001 (25)
	'0',					// 0b00011010 (26)
	'7',					// 0b00011011 (27)
	'\0',					// 0b00011100 (28)
	'\0',					// 0b00011101 (29)
	'\0',					// 0b00011110 (30)
	'\0',					// 0b00011111 (31)
	'\0',					// 0b00100000 (32)
	'\0',					// 0b00100001 (33)
	'\0',					// 0b00100010 (34)
	'\0',					// 0b00100011 (35)
	'\0',					// 0b00100100 (36)
	'\0',					// 0b00100101 (37)
	'\0',					// 0b00100110 (38)
	'\0',					// 0b00100111 (39)
	TKEY_MODE_UPPERCASE,					// 0b00101000 (40)
	'\0',					// 0b00101001 (41)
	'\0',					// 0b00101010 (42)
	'\0',					// 0b00101011 (43)
	'\0',					// 0b00101100 (44)
	'\0',					// 0b00101101 (45)
	'\0',					// 0b00101110 (46)
	'\0',					// 0b00101111 (47)
	'\0',					// 0b00110000 (48)
	'\0',					// 0b00110001 (49)
	'\0',					// 0b00110010 (50)
	'\0',					// 0b00110011 (51)
	'\0',					// 0b00110100 (52)
	'\0',					// 0b00110101 (53)
	'\0',					// 0b00110110 (54)
	'\0',					// 0b00110111 (55)
	'\0',					// 0b00111000 (56)
	'\0',					// 0b00111001 (57)
	'\0',					// 0b00111010 (58)
	'\0',					// 0b00111011 (59)
	TKEY_MODE_NUMBERS,					// 0b00111100 (60)
	'\0',					// 0b00111101 (61)
	'\0',					// 0b00111110 (62)
	'\0',					// 0b00111111 (63)
};

const uint16_t keycodesExtraMode[KEY_COMBOS_NO] PROGMEM = {
	'\0',					// 0b00000000 (0)
	TKEY_F1,					// 0b00000001 (1)
	'\0',					// 0b00000010 (2)
	TKEY_F2,					// 0b00000011 (3)
	'\0',					// 0b00000100 (4)
	TKEY_F11,					// 0b00000101 (5)
	'\0',					// 0b00000110 (6)
	TKEY_F12,					// 0b00000111 (7)
	'\0',					// 0b00001000 (8)
	TKEY_F3,					// 0b00001001 (9)
	TKEY_F9,					// 0b00001010 (10)
	TKEY_F6,					// 0b00001011 (11)
	'\0',					// 0b00001100 (12)
	TKEY_RIGHT_GUI,					// 0b00001101 (13)
	TKEY_LEFT_GUI,					// 0b00001110 (14)
	TKEY_LEFT_ALT,					// 0b00001111 (15)
	'\0',					// 0b00010000 (16)
	TKEY_F5,					// 0b00010001 (17)
	'\0',					// 0b00010010 (18)
	TKEY_F8,					// 0b00010011 (19)
	'\0',					// 0b00010100 (20)
	TKEY_INSERT,					// 0b00010101 (21)
	'\0',					// 0b00010110 (22)
	TKEY_ESC,					// 0b00010111 (23)
	'\0',					// 0b00011000 (24)
	TKEY_F4,					// 0b00011001 (25)
	TKEY_F10,					// 0b00011010 (26)
	TKEY_F7,					// 0b00011011 (27)
	'\0',					// 0b00011100 (28)
	'\0',					// 0b00011101 (29)
	TKEY_TAB,					// 0b00011110 (30)
	TKEY_RIGHT_ALT,					// 0b00011111 (31)
	'\0',					// 0b00100000 (32)
	'\0',					// 0b00100001 (33)
	'\0',					// 0b00100010 (34)
	'\0',					// 0b00100011 (35)
	'\0',					// 0b00100100 (36)
	TKEY_CAPS_LOCK,					// 0b00100101 (37)
	'\0',					// 0b00100110 (38)
	TKEY_HOME,					// 0b00100111 (39)
	TKEY_MODE_UPPERCASE,					// 0b00101000 (40)
	'\0',					// 0b00101001 (41)
	'\0',					// 0b00101010 (42)
	'\0',					// 0b00101011 (43)
	'\0',					// 0b00101100 (44)
	TKEY_DELETE,					// 0b00101101 (45)
	'\0',					// 0b00101110 (46)
	'\0',					// 0b00101111 (47)
	'\0',					// 0b00110000 (48)
	'\0',					// 0b00110001 (49)
	'\0',					// 0b00110010 (50)
	'\0',					// 0b00110011 (51)
	'\0',					// 0b00110100 (52)
	TKEY_PAGE_DOWN,					// 0b00110101 (53)
	'\0',					// 0b00110110 (54)
	'\0',					// 0b00110111 (55)
	'\0',					// 0b00111000 (56)
	'\0',					// 0b00111001 (57)
	TKEY_END,					// 0b00111010 (58)
	'\0',					// 0b00111011 (59)
	TKEY_MODE_NUMBERS,					// 0b00111100 (60)
	TKEY_PAGE_UP,					// 0b00111101 (61)
	'\0',					// 0b00111110 (62)
	'\0',					// 0b00111111 (63)
};
