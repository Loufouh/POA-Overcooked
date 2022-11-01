
#ifndef POA_OVERCOOKED_HASPROBLEMPANRULE_H
#define POA_OVERCOOKED_HASPROBLEMPANRULE_H

#include "agent/rules/Rule/Rule.h"

namespace agent {
    namespace rules {

        class HasProblemPanRule : public Rule {
        public:
            HasProblemPanRule();
            bool apply() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_HASPROBLEMPANRULE_H
