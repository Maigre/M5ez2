#pragma once
#include <ezTime.h>

#define TZ_POSIX ("EET-2EEST,M3.5.0/3,M10.5.0/4")

// Coupling:
// ezClock (actually ezTime) exposes one function that M5ez calls from yield: events().
// It's implemented with entry(FEATURE_MSG_CLOCK_EVENTS, nullptr)

#define FEATURE_MSG_CLOCK_EVENTS	11

class ezClock {
	public:
		static bool entry(uint8_t command, void* user);
		static void begin();
		static void restart();
		static void menu();
		static uint32_t loop();
		static void draw(uint16_t x, uint16_t w);
		static bool waitForSync(const uint16_t timeout = 0);
		static Timezone tz;
	private:
		static void _writePrefs();
		static bool _on;
		static bool _posix_on;
		static String _timezone;
		static String _posix;
		static bool _date_on;
		static bool _clock12;
		static bool _am_pm;
		static String _datetime;
		static bool _starting;
};
