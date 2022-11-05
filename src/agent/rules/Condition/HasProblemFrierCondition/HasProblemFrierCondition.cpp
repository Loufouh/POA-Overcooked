
#include "HasProblemFrierCondition.h"
#include "environment/Environment/Environment.h"
#include <iostream>

namespace agent {
    namespace rules {
        bool HasProblemFrierCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();
            // std::cout << "HasProblemFrierCondition visited\n";
            return env.frier.hasProblem();
        }
    } // agent
} // rules