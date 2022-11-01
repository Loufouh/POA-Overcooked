
#include "BeginCookingAction.h"
#include "Agent/Agent.h"
#include "iostream"

namespace agent {
    namespace rules {
        void BeginCookingAction::execute() {
            agent::Agent &agent = *agent::Agent::getInstance_ptr();

            agent.setState(AgentState::cooking);

            std::cout << "Agent start cooking !" << std::endl;
        }
    } // agent
} // rules