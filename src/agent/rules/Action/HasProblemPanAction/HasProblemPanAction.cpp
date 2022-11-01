
#include "HasProblemPanAction.h"
#include "Agent/Agent.h"
#include "iostream"

namespace agent {
    namespace rules {
        void HasProblemPanAction::execute() {
            agent::Agent &agent = *agent::Agent::getInstance_ptr();

            agent.setState(AgentState::shutdown);

            std::cout << "Pan has a problem, shutdown !" << std::endl;
        }
    } // agent
} // rules