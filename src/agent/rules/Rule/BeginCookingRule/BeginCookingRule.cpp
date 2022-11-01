
#include "BeginCookingRule.h"
#include "rules/Condition/BeginCookingCondition/BeginCookingCondition.h"
#include "rules/Action/BeginCookingAction/BeginCookingAction.h"

namespace agent {
    namespace rules {
        BeginCookingRule::BeginCookingRule() : Rule(BeginCookingCondition(), BeginCookingAction()) {}

        bool BeginCookingRule::apply() {
            return Rule::apply();
        }
    } // agent
} // rules