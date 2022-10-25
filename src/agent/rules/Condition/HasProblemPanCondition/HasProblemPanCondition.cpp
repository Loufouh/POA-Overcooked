
#include "HasProblemPanCondition.h"
#include "environment/Environment/Environment.h"

namespace agent {
    namespace rules {
        bool HasProblemPanCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();

            return env.pan.hasProblem();
        }
    } // agent
} // rules