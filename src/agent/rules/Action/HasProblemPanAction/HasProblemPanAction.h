
#ifndef POA_OVERCOOKED_HASPROBLEMPANACTION_H
#define POA_OVERCOOKED_HASPROBLEMPANACTION_H

#include "rules/Action/Action.h"

namespace agent {
    namespace rules {

        class HasProblemPanAction : public Action {
            public:
            void execute() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_HASPROBLEMPANACTION_H
