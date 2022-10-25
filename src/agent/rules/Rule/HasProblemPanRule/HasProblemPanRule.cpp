
#include "HasProblemPanRule.h"
#include "rules/Condition/HasProblemPanCondition/HasProblemPanCondition.h"
#include "rules/Action/HasProblemPanAction/HasProblemPanAction.h"

namespace agent {
    namespace rules {
        HasProblemPanRule::HasProblemPanRule() : Rule(HasProblemPanCondition(), HasProblemPanAction()) {}

        void HasProblemPanRule::apply() {
            Rule::apply();
        }
    } // agent
} // rules