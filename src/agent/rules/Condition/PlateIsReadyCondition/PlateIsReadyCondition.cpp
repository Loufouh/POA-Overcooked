
#include "PlateIsReadyCondition.h"
#include "environment/Environment/Environment.h"
#include <iostream>

namespace agent {
    namespace rules {
        bool PlateIsReadyCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();

            // std::cout << "PlateIdReadyCondition visited\n";
            return env.plate.isReady();
        }
    } // agent
} // rules