
#ifndef POA_OVERCOOKED_EMPTYBOXRULE_H
#define POA_OVERCOOKED_EMPTYBOXRULE_H

#include "agent/rules/Rule/Rule.h"

namespace agent {
    namespace rules {

        class EmptyBoxRule : public Rule {
        public:
            EmptyBoxRule();
            void apply() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_EMPTYBOXRULE_H
