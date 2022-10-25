
#ifndef POA_OVERCOOKED_HASPROBLEMFRIERACTION_H
#define POA_OVERCOOKED_HASPROBLEMFRIERACTION_H

#include "rules/Action/Action.h"

namespace agent {
    namespace rules {

        class HasProblemFrierAction : public Action {
            void execute() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_HASPROBLEMFRIERACTION_H
