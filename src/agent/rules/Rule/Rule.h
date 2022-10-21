
#ifndef POA_OVERCOOKED_RULE_H
#define POA_OVERCOOKED_RULE_H

#include "agent/rules/Condition/Condition.h"
#include "agent/rules/Action/Action.h"

namespace agent {
    namespace rules {

        class Rule {
        private:
            Condition condition;
            Action action;

        public:
            virtual void apply() {};
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_RULE_H
