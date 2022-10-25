
#include "HasProblemFrierCondition.h"
#include "environment/Environment/Environment.h"

namespace agent {
    namespace rules {
        bool HasProblemFrierCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();
            return env.frier.hasProblem();
        }
    } // agent
} // rules