
#include "PutFrierInPlateRule.h"
#include "rules/Condition/PutFrierInPlateCondition/PutFrierInPlateCondition.h"
#include "rules/Action/PutFrierInPlateAction/PutFrierInPlateAction.h"

namespace agent {
    namespace rules {
        PutFrierInPlateRule::PutFrierInPlateRule() : Rule(PutFrierInPlateCondition(), PutFrierInPlateAction()) {}

        void PutFrierInPlateRule::apply() {
            Rule::apply();
        }
    } // agent
} // rules