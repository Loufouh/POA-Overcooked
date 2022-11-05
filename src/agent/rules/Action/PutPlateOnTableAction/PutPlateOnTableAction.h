
#ifndef POA_OVERCOOKED_PUTPLATEONTABLEACTION_H
#define POA_OVERCOOKED_PUTPLATEONTABLEACTION_H

#include "rules/Action/Action.h"

namespace agent {
    namespace rules {

        class PutPlateOnTableAction : public Action {
            public:
            void execute() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_PUTPLATEONTABLEACTION_H
