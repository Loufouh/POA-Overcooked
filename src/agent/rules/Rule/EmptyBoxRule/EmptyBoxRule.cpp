
#include "EmptyBoxRule.h"
#include "rules/Condition/EmptyBoxCondition/EmptyBoxCondition.h"
#include "rules/Action/EmptyBoxAction/EmptyBoxAction.h"

namespace agent {
    namespace rules {
        EmptyBoxRule::EmptyBoxRule() : Rule(EmptyBoxCondition(), EmptyBoxAction()) {}

        void EmptyBoxRule::apply() {
            Rule::apply();
        }
    } // agent
} // rules