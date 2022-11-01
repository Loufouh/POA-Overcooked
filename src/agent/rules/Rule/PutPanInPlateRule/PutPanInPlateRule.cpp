
#include "PutPanInPlateRule.h"
#include "rules/Condition/PutPanInPlateCondition/PutPanInPlateCondition.h"
#include "rules/Action/PutPanInPlateAction/PutPanInPlateAction.h"

namespace agent {
    namespace rules {
        PutPanInPlateRule::PutPanInPlateRule() : Rule(PutPanInPlateCondition(), PutPanInPlateAction()) {}

        void PutPanInPlateRule::apply() {
            Rule::apply();
        }
    } // agent
} // rules