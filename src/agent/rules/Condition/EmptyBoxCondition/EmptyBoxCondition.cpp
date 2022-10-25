
#include "EmptyBoxCondition.h"
#include "environment/Environment/Environment.h"
#include "Agent/Agent.h"

namespace agent {
    namespace rules {
        bool EmptyBoxCondition::isVerified() {
            environment::Environment &env = *environment::Environment::getInstance_ptr();
            agent::Agent &agent = *agent::Agent::getInstance_ptr();

            return !agent.isCooking() &&
                    env.orderList.hasRemainingOrders() &&
                    (env.friesBox.isEmpty() ||
                    env.platesBox.isEmpty() ||
                    env.steaksBox.isEmpty());
        }
    } // agent
} // rules