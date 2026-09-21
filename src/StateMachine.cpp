#include "StateMachine.h"

void
StateMachine::service(time_t now) {
    timers.service(*this, now);
}