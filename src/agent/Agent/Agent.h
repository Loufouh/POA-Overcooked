
#ifndef POA_OVERCOOKED_AGENT_H
#define POA_OVERCOOKED_AGENT_H

namespace agent {
    enum class AgentState {
        waiting,
        cooking,
        shutdown
    };

    class Agent {
    private:
        AgentState state;

        void setState(AgentState newState);
        bool isWaiting();
        bool isCooking();
        bool isShutdown();
    };

}

#endif //POA_OVERCOOKED_AGENT_H
