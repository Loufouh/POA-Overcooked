
#ifndef POA_OVERCOOKED_COOKINFRIERRULE_H
#define POA_OVERCOOKED_COOKINFRIERRULE_H

#include "agent/rules/Rule/Rule.h"

namespace agent {
    namespace rules {

        class CookInFrierRule : public Rule {
        public:
            CookInFrierRule();
            bool apply() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_COOKINFRIERRULE_H
