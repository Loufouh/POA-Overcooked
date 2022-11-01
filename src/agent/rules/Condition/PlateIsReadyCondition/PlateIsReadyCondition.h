
#ifndef POA_OVERCOOKED_PLATEISREADYCONDITION_H
#define POA_OVERCOOKED_PLATEISREADYCONDITION_H

#include "rules/Condition/Condition.h"

namespace agent {
    namespace rules {

        class PlateIsReadyCondition : public Condition {
        public:
            bool isVerified() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_PLATEISREADYCONDITION_H
