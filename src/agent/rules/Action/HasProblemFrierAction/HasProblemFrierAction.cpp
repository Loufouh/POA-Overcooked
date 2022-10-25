
#include "HasProblemFrierAction.h"
#include "Agent/Agent.h"

namespace agent {
    namespace rules {
        void HasProblemFrierAction::execute() {
            agent::Agent &agent = *agent::Agent::getInstance_ptr();

            agent.setState(AgentState::shutdown);
        }
    } // agent
} // rules