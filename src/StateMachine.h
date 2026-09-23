#include "Event.h"
#include "Timers.h"

namespace LoRa::Layer2 {

class StateMachine {
    public:
        StateMachine() {}
        virtual ~StateMachine() {}
        int getState()  { return state; }
        void setState(int state) { this->state = state; }

//        virtual void dispatchEvent(const Event &event) = 0;
        void service(time_t now);

        
    protected:
        int state;
        Timers timers;
};

}