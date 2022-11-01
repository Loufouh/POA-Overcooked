
#include "PutPanInPlateRule.h"
#include "rules/Condition/PutPanInPlateCondition/PutPanInPlateCondition.h"
#include "rules/Action/PutPanInPlateAction/PutPanInPlateAction.h"

namespace agent {
    namespace rules {
        PutPanInPlateRule::PutPanInPlateRule() : Rule(PutPanInPlateCondition(), PutPanInPlateAction()) {}

        bool PutPanInPlateRule::apply() {
            return Rule::apply();
        }
    } // agent
} // rules