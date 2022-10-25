
#ifndef POA_OVERCOOKED_COOKINFRIERCONDITION_H
#define POA_OVERCOOKED_COOKINFRIERCONDITION_H

#include "rules/Condition/Condition.h"

namespace agent {
    namespace rules {

        class CookInFrierCondition : public Condition {
        public:
            bool isVerified() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_COOKINFRIERCONDITION_H
