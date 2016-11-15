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
