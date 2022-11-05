
#ifndef POA_OVERCOOKED_PUTPLATEONTABLERULE_H
#define POA_OVERCOOKED_PUTPLATEONTABLERULE_H

#include "agent/rules/Rule/Rule.h"

namespace agent {
    namespace rules {

        class PutPlateOnTableRule : public Rule {
        public:
            PutPlateOnTableRule();
            bool apply() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_PUTPLATEONTABLERULE_H
