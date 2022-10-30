
#include "Machine.h"
#include <iostream>

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

        void Machine::print_state()
        {
            switch( state )
            {
                case MachineState::free : std::cout << "Free"; break;
                case MachineState::cooking : std::cout << "Cooking"; break;
                case MachineState::ready : std::cout << "Ready"; break;
                case MachineState::hasProblem : std::cout << "hasProblem"; break;
                default : std::cout << "?"; break;
            }
        }
    }
}