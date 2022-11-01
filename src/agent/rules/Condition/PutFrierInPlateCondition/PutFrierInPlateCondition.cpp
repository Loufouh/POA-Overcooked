
#include "PutFrierInPlateCondition.h"
#include "environment/Environment/Environment.h"

namespace agent {
    namespace rules {
        bool PutFrierInPlateCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();

            return env.frier.isReady()
                    && env.table.hasPlate();
        }
    } // agent
} // rules