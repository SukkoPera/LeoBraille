#include <i2c_touch_sensor.h>
#include "Buttons.h"

/* This allows input through the Grove I2C Touch Sensor by Seeed Studio:
 * http://wiki.seeed.cc/Grove-I2C_Touch_Sensor/
 *
 * It uses the library available at
 * https://github.com/Seeed-Studio/Grove_I2C_Touch_Sensor, but such library
 * pretty suxx, so I might end up forking and fixing it myself. This is the
 * first library made by the Seeed guys I've ever seen and I must admit I'm not
 * that impressed... It doesn't even compile on Linux, due to filename case
 * issues!
 */
class ButtonsGroveI2CTouch: public Buttons {
private:
	// Interval between sensor reads
	static const unsigned long INTERVAL = 100;

	i2ctouchsensor touchsensor;

	unsigned long lastRead;

public:
	void begin () {
		Wire.begin ();
		touchsensor.initialize ();
		lastRead = 0;
	}

	word read () override {
		if (millis () - lastRead > INTERVAL) {
			touchsensor.getTouchState ();
			lastRead = millis ();
		}

		for (byte i = 0; i < 12; i++) {
			if (touchsensor.touched & (1 << i)) {
				Serial.print (F("Sensor "));
				Serial.print (i);
				Serial.println (F(" was  touched"));
			}
		}

		// First 6 sensors are the keys
		word ret = touchsensor.touched & 0x3F;

		// Sensor 7 is Space
		ret |= (touchsensor.touched & (1 << 6)) << 2;

		// Sensor 8 is Enter
		ret |= (touchsensor.touched & (1 << 7)) << 2;

		// Sensor 9 is Backspace
		ret |= (touchsensor.touched & (1 << 8)) << 2;

		return ret;
	}
};
