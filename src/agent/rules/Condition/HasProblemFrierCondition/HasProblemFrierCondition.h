
#ifndef POA_OVERCOOKED_HASPROBLEMFRIERCONDITION_H
#define POA_OVERCOOKED_HASPROBLEMFRIERCONDITION_H

#include "rules/Condition/Condition.h"

namespace agent {
    namespace rules {

        class HasProblemFrierCondition : public Condition {
        public:
            bool isVerified() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_HASPROBLEMFRIERCONDITION_H
