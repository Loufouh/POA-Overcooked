
#include "Agent.h"

namespace agent {
    Agent *Agent::instance_ptr = nullptr;

    bool Agent::isWaiting() {
        return state == AgentState::waiting;
    }

    bool Agent::isCooking() {
        return state == AgentState::cooking;
    }

    bool Agent::isShutdown() {
        return state == AgentState::shutdown;
    }

    void Agent::setState(AgentState newState) {
        state = newState;
    }

    Agent *Agent::getIntance_ptr() {
         if(instance_ptr == nullptr) {
            instance_ptr = new Agent();
        }

        return instance_ptr;
    }
}