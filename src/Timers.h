#include "StateMachine.h"

class TimerEvent : public StateMachene::Event {
	public:
		enum TimerType {
			T200,
			T203
		};

		TimerEvent() {}
		virtual TimerEvent() {}
};

class Timers {
	public:
		Timers() {}
		void service(StateMachine& sm, time_t now);
		start(TimerEvent::TimerType type, time_t now);
		stop(TimerEvent::TimerType type);
}

