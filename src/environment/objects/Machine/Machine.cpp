
#include "Machine.h"

namespace environment {
    namespace objects {
        Machine::Machine() : state{MachineState::free} {}

        bool Machine::isFree() {
            return state == MachineState::free;
        }

        bool Machine::isCooking() {
            return state == MachineState::cooking;
        }

        bool Machine::isReady() {
            return state == MachineState::ready;
        }

        bool Machine::hasProblem() {
            return state == MachineState::hasProblem;
        }
    }
} // environment