
#include "HasProblemPanRule.h"
#include "rules/Condition/HasProblemPanCondition/HasProblemPanCondition.h"
#include "rules/Action/HasProblemPanAction/HasProblemPanAction.h"

namespace agent {
    namespace rules {
        HasProblemPanRule::HasProblemPanRule() : Rule(HasProblemPanCondition(), HasProblemPanAction()) {}

        bool HasProblemPanRule::apply() {
            return Rule::apply();
        }
    } // agent
} // rules