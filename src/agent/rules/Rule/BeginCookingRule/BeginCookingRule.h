
#ifndef POA_OVERCOOKED_BEGINCOOKINGRULE_H
#define POA_OVERCOOKED_BEGINCOOKINGRULE_H

#include "agent/rules/Rule/Rule.h"

namespace agent {
    namespace rules {

        class BeginCookingRule : public Rule {
        public:
            BeginCookingRule();
            void apply() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_BEGINCOOKINGRULE_H
