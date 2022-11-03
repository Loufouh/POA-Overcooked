
#include "BeginCookingCondition.h"
#include "environment/Environment/Environment.h"
#include "Agent/Agent.h"
#include <iostream>

namespace agent {
    namespace rules {
        bool BeginCookingCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();
            agent::Agent &agent = *agent::Agent::getInstance_ptr();
            
            std::cout << "BeginCookingCondition visited\n";

            return env.orderList.hasRemainingOrders()
                    && !(
                        agent.isCooking()
                        || env.friesBox.isEmpty()
                        || env.steaksBox.isEmpty()
                        || env.platesBox.isEmpty()
                    );
        }
    } // agent
} // rules