#ifndef POA_OVERCOOKED_AGENT_H
#define POA_OVERCOOKED_AGENT_H

// Crash à 14%
// #include "agent/Agent/rules/Set/Set.h"
// Crash à 99%
// #include "rules/Set/Set.h"
// #include "agent/rules/Set/Set.h"

#include <agent/rules/Set/Set.h>

namespace agent {
    enum class AgentState {
        waiting,
        cooking,
        shutdown
    };

    class Agent {
    private:
        static Agent *instance_ptr;
        agent::rules::Set ruleSet;
        AgentState state;

    public:
        void setState(AgentState newState);
        bool isWaiting();
        bool isCooking();
        bool isShutdown();

        static Agent *getInstance_ptr();

        void print_state();
        void print();

        void processRules();
        
        void main_loop();
    };

}

#endif //POA_OVERCOOKED_AGENT_H
