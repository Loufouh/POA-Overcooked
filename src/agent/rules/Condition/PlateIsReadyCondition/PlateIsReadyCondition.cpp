
#include "PlateIsReadyCondition.h"
#include "environment/Environment/Environment.h"

namespace agent {
    namespace rules {
        bool PlateIsReadyCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();

            return env.plate.isReady();
        }
    } // agent
} // rules