
#include "CookInFrierRule.h"
#include "rules/Condition/CookInFrierCondition/CookInFrierCondition.h"
#include "rules/Action/CookInFrierAction/CookInFrierAction.h"

namespace agent {
    namespace rules {
        CookInFrierRule::CookInFrierRule() : Rule(CookInFrierCondition(), CookInFrierAction()) {}

        bool CookInFrierRule::apply() {
            return Rule::apply();
        }
    } // agent
} // rules