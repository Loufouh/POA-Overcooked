
#ifndef POA_OVERCOOKED_EMPTYBOXCONDITION_H
#define POA_OVERCOOKED_EMPTYBOXCONDITION_H

#include "rules/Condition/Condition.h"

namespace agent {
    namespace rules {

        class EmptyBoxCondition : public Condition {
        public:
            bool isVerified() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_EMPTYBOXCONDITION_H
