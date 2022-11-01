
#ifndef POA_OVERCOOKED_PUTFRIERINPLATEACTION_H
#define POA_OVERCOOKED_PUTFRIERINPLATEACTION_H

#include "rules/Action/Action.h"

namespace agent {
    namespace rules {

        class PutFrierInPlateAction : public Action {
            void execute() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_PUTFRIERINPLATEACTION_H
