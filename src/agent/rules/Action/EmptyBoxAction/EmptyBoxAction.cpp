
#include "EmptyBoxAction.h"
#include "Agent/Agent.h"
#include "iostream"

namespace agent {
    namespace rules {
        void EmptyBoxAction::execute() {
            agent::Agent &agent = *agent::Agent::getInstance_ptr();

            agent.setState(AgentState::shutdown);

            std::cout << "One box is empty, agent shutdown !" << std::endl;
        }
    } // agent
} // rules