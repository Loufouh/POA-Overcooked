
#include "Agent.h"

namespace agent {
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
}