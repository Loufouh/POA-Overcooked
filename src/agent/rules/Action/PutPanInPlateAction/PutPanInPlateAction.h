
#ifndef POA_OVERCOOKED_PUTPANINPLATEACTION_H
#define POA_OVERCOOKED_PUTPANINPLATEACTION_H

#include "rules/Action/Action.h"

namespace agent {
    namespace rules {

        class PutPanInPlateAction : public Action {
            void execute() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_PUTPANINPLATEACTION_H
