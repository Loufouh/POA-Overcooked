
#ifndef POA_OVERCOOKED_BEGINCOOKINGACTION_H
#define POA_OVERCOOKED_BEGINCOOKINGACTION_H

#include "rules/Action/Action.h"

namespace agent {
    namespace rules {

        class BeginCookingAction : public Action {
            public:
            void execute() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_BEGINCOOKINGACTION_H
