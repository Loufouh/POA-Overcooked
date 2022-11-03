
#include "PutFrierInPlateCondition.h"
#include "environment/Environment/Environment.h"
#include <iostream>

namespace agent {
    namespace rules {
        bool PutFrierInPlateCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();
            
            std::cout << "PutFrierInPlateCondition visited\n";

            return env.frier.isReady()
                    && env.table.hasPlate();
        }
    } // agent
} // rules