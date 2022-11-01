
#ifndef POA_OVERCOOKED_PUTPANINPLATECONDITION_H
#define POA_OVERCOOKED_PUTPANINPLATECONDITION_H

#include "rules/Condition/Condition.h"

namespace agent {
    namespace rules {

        class PutPanInPlateCondition : public Condition {
        public:
            bool isVerified() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_PUTPANINPLATECONDITION_H
