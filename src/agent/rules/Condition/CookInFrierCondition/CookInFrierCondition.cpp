
#include "CookInFrierCondition.h"
#include "environment/Environment/Environment.h"
#include "Agent/Agent.h"
#include <iostream>

namespace agent {
    namespace rules {
        bool CookInFrierCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();
            agent::Agent &agent = *agent::Agent::getInstance_ptr();

            std::cout << "CookInFrierCondition visited\n";

            return agent.isCooking()&&
                    env.frier.isFree()&&
                    !env.table.hasPlate();
        }
    } // agent
} // rules