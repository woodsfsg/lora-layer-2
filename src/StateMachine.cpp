#include "StateMachine.h"

void
LoRa::Layer2::StateMachine::service(time_t now) {
    timers.service(*this, now);
}