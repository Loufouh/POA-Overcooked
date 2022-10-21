
#ifndef POA_OVERCOOKED_BEGINCOOKINGCONDITION_H
#define POA_OVERCOOKED_BEGINCOOKINGCONDITION_H

#include "rules/Condition/Condition.h"

namespace agent {
    namespace rules {

        class BeginCookingCondition : public Condition {
        public:
            bool isVerified() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_BEGINCOOKINGCONDITION_H
