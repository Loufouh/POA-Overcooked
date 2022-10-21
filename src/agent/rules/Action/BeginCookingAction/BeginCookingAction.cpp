
#include "BeginCookingAction.h"
#include "Agent/Agent.h"

namespace agent {
    namespace rules {
        void BeginCookingAction::execute() {
            agent::Agent &agent = *agent::Agent::getInstance_ptr();

            agent.setState(AgentState::cooking);
        }
    } // agent
} // rules