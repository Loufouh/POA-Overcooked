
#include "PlateIsReadyRule.h"
#include "rules/Condition/PlateIsReadyCondition/PlateIsReadyCondition.h"
#include "rules/Action/PlateIsReadyAction/PlateIsReadyAction.h"

namespace agent {
    namespace rules {
        PlateIsReadyRule::PlateIsReadyRule() : Rule(PlateIsReadyCondition(), PlateIsReadyAction()) {}

        void PlateIsReadyRule::apply() {
            Rule::apply();
        }
    } // agent
} // rules