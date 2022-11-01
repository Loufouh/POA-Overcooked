
#include "PlateIsReadyAction.h"
#include "src/environment/Controller/Controller.h"
#include "Agent/Agent.h"
#include "iostream"

namespace agent {
    namespace rules {
        void PlateIsReadyAction::execute() {
            environment::Controller &controller = *environment::Controller::getInstance_ptr();
            agent::Agent &agent = *agent::Agent::getInstance_ptr();

            controller.ring();
            agent.setState(AgentState::waiting);

            std::cout << "Ring ! The plate is ready, agent is now waiting !" << std::endl;
        }
    } // agent
} // rules