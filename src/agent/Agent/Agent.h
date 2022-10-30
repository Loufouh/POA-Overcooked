
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
        static Agent *instance_ptr;

        AgentState state;

    public:
        void setState(AgentState newState);
        bool isWaiting();
        bool isCooking();
        bool isShutdown();

        static Agent *getInstance_ptr();

        void print_state();
        void print();
    };

}

#endif //POA_OVERCOOKED_AGENT_H
