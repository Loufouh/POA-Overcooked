
#include "EmptyBoxAction.h"
#include "Agent/Agent.h"

namespace agent {
    namespace rules {
        void EmptyBoxAction::execute() {
            agent::Agent &agent = *agent::Agent::getInstance_ptr();

            agent.setState(AgentState::shutdown);
        }
    } // agent
} // rules