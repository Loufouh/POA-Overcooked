
#ifndef POA_OVERCOOKED_HASPROBLEMPANCONDITION_H
#define POA_OVERCOOKED_HASPROBLEMPANCONDITION_H

#include "rules/Condition/Condition.h"

namespace agent {
    namespace rules {

        class HasProblemPanCondition : public Condition {
        public:
            bool isVerified() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_HASPROBLEMPANCONDITION_H
