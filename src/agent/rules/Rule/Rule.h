
#ifndef POA_OVERCOOKED_RULE_H
#define POA_OVERCOOKED_RULE_H

namespace agent {
    namespace rules {

        class Rule {
            virtual void apply() = 0;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_RULE_H
