
#include "HasProblemPanCondition.h"
#include "environment/Environment/Environment.h"
#include <iostream>

namespace agent {
    namespace rules {
        bool HasProblemPanCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();

            std::cout << "HasProblemPanCondition visited\n";
            return env.pan.hasProblem();
        }
    } // agent
} // rules