
#include "PutPanInPlateCondition.h"
#include "environment/Environment/Environment.h"

namespace agent {
    namespace rules {
        bool PutPanInPlateCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();

            return env.pan.isReady()
                    && env.table.hasPlate();
        }
    } // agent
} // rules