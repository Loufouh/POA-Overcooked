
#ifndef POA_OVERCOOKED_EMPTYBOXACTION_H
#define POA_OVERCOOKED_EMPTYBOXACTION_H

#include "rules/Action/Action.h"

namespace agent {
    namespace rules {

        class EmptyBoxAction : public Action {
            public:
            void execute() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_EMPTYBOXACTION_H
