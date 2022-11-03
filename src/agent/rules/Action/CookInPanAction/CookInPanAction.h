
#ifndef POA_OVERCOOKED_COOKINPANACTION_H
#define POA_OVERCOOKED_COOKINPANACTION_H

#include "rules/Action/Action.h"

namespace agent {
    namespace rules {

        class CookInPanAction : public Action {
            public:
            void execute() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_PUTFRIERINPLATEACTION_H
