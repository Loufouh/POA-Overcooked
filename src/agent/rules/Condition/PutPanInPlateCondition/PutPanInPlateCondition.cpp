
#include "PutPanInPlateCondition.h"
#include "environment/Environment/Environment.h"
#include <iostream>

namespace agent {
    namespace rules {
        bool PutPanInPlateCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();

            // std::cout << "PutPanInPlateCondition visited\n";

            return env.pan.isReady()
                    && env.table.hasPlate();
        }
    } // agent
} // rules