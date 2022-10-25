
#ifndef POA_OVERCOOKED_COOKINFRIERACTION_H
#define POA_OVERCOOKED_COOKINFRIERACTION_H

#include "rules/Action/Action.h"

namespace agent {
    namespace rules {

        class CookInFrierAction : public Action {
            void execute() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_COOKINFRIERACTION_H
