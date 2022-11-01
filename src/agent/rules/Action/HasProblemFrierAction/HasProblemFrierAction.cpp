
#include "HasProblemFrierAction.h"
#include "Agent/Agent.h"
#include "iostream"

namespace agent {
    namespace rules {
        void HasProblemFrierAction::execute() {
            agent::Agent &agent = *agent::Agent::getInstance_ptr();

            agent.setState(AgentState::shutdown);

            std::cout << "Frier has a problem, shutdown !" << std::endl;
        }
    } // agent
} // rules