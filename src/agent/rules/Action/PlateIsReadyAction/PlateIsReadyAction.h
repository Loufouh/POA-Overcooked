
#ifndef POA_OVERCOOKED_PLATEISREADYACTION_H
#define POA_OVERCOOKED_PLATEISREADYACTION_H

#include "rules/Action/Action.h"

namespace agent {
    namespace rules {

        class PlateIsReadyAction : public Action {
            public:
            void execute() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_PLATEISREADYACTION_H
