#include "CookInPanCondition.h"
#include "environment/Environment/Environment.h"
#include "Agent/Agent.h"
#include <iostream>


namespace agent {
    namespace rules {
        bool CookInPanCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();
            agent::Agent &agent = *agent::Agent::getInstance_ptr();

            std::cout << "CookInPanConditon visited\n";

            return agent.isCooking()
                && env.pan.isFree()
                && !env.table.hasPlate();
        }
    } // agent
} // rules