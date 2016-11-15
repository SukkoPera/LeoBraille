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
