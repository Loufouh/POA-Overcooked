
#include "HasProblemFrierRule.h"
#include "rules/Condition/HasProblemFrierCondition/HasProblemFrierCondition.h"
#include "rules/Action/HasProblemFrierAction/HasProblemFrierAction.h"

namespace agent {
    namespace rules {
        HasProblemFrierRule::HasProblemFrierRule() : Rule(HasProblemFrierCondition(), HasProblemFrierAction()) {}

        void HasProblemFrierRule::apply() {
            Rule::apply();
        }
    } // agent
} // rules