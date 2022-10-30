#include "PutSteakOnPanCondition.h"
#include "environment/Environment/Environment.h"
#include "Agent/Agent.h"

namespace agent {
    namespace rules {
        bool PutSteakOnPanCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();
            agent::Agent &agent = *agent::Agent::getInstance_ptr();

            return agent.isCooking()
                && env.pan.isFree()
                && !env.table.hasPlate();
        }
    } // agent
} // rules