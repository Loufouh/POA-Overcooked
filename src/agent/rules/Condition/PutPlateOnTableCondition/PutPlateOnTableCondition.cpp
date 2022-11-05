
#include "PutPlateOnTableCondition.h"
#include "environment/Environment/Environment.h"
#include <iostream>
#include "Agent/Agent.h"

namespace agent {
    namespace rules {
        bool PutPlateOnTableCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();
            agent::Agent &agent = *agent::Agent::getInstance_ptr();

            std::cout << "PutPlateOnTableCondition visited\n";

            return agent.isCooking()
                    && env.frier.isCooking()
                    && env.pan.isCooking()
                    && !env.table.hasPlate();
        }
    } // agent
} // rules