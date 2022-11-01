
#ifndef POA_OVERCOOKED_PUTFRIERINPLATECONDITION_H
#define POA_OVERCOOKED_PUTFRIERINPLATECONDITION_H

#include "rules/Condition/Condition.h"

namespace agent {
    namespace rules {

        class PutFrierInPlateCondition : public Condition {
        public:
            bool isVerified() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_PUTFRIERINPLATECONDITION_H
