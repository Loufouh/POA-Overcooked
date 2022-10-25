
#ifndef POA_OVERCOOKED_HASPROBLEMFRIERRULE_H
#define POA_OVERCOOKED_HASPROBLEMFRIERRULE_H

#include "agent/rules/Rule/Rule.h"

namespace agent {
    namespace rules {

        class HasProblemFrierRule : public Rule {
        public:
            HasProblemFrierRule();
            void apply() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_HASPROBLEMFRIERRULE_H
