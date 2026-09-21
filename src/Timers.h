#include <time.h>
#include "Event.h"

class StateMachine;

class TimerEvent : public Event {
	public:
		enum TimerType {
			T200,
			T203
		};

		TimerEvent() {}
		~TimerEvent() {}
};

class Timers {
	public:
		Timers();
		time_t service(StateMachine& sm, time_t now); // Returns time of next expiry or 0 if no timer running
		void start(TimerEvent::TimerType type, time_t now);
		void stop(TimerEvent::TimerType type);
};

