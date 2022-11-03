
#ifndef POA_OVERCOOKED_COOKINPANRULE_H
#define POA_OVERCOOKED_COOKINPANRULE_H

#include "agent/rules/Rule/Rule.h"

namespace agent {
    namespace rules {

        class CookInPanRule : public Rule {
        public:
            CookInPanRule();
            bool apply() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_BEGINCOOKINGRULE_H
