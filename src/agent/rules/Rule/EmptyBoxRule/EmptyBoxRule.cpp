
#include "EmptyBoxRule.h"
#include "rules/Condition/EmptyBoxCondition/EmptyBoxCondition.h"
#include "rules/Action/EmptyBoxAction/EmptyBoxAction.h"

namespace agent {
    namespace rules {
        EmptyBoxRule::EmptyBoxRule() : Rule(EmptyBoxCondition(), EmptyBoxAction()) {}

        bool EmptyBoxRule::apply() {
            return Rule::apply();
        }
    } // agent
} // rules