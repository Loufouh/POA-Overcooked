
#ifndef POA_OVERCOOKED_COOKINPANONDITION_H
#define POA_OVERCOOKED_COOKINPANCONDITION_H

#include "rules/Condition/Condition.h"

namespace agent {
    namespace rules {

        class CookInPanCondition : public Condition {
        public:
            bool isVerified() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_BEGINCOOKINGCONDITION_H