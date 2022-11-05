
#ifndef POA_OVERCOOKED_PUTPLATEONTABLECONDITION_H
#define POA_OVERCOOKED_PUTPLATEONTABLECONDITION_H

#include "rules/Condition/Condition.h"

namespace agent {
    namespace rules {

        class PutPlateOnTableCondition : public Condition {
        public:
            bool isVerified() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_PUTPLATEONTABLECONDITION_H
