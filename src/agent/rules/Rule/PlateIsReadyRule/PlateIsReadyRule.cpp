
#include "PlateIsReadyRule.h"
#include "rules/Condition/PlateIsReadyCondition/PlateIsReadyCondition.h"
#include "rules/Action/PlateIsReadyAction/PlateIsReadyAction.h"

namespace agent {
    namespace rules {
        PlateIsReadyRule::PlateIsReadyRule() : Rule(PlateIsReadyCondition(), PlateIsReadyAction()) {}

        bool PlateIsReadyRule::apply() {
            return Rule::apply();
        }
    } // agent
} // rules