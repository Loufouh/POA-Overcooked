
#ifndef POA_OVERCOOKED_PUTFRIERINPLATERULE_H
#define POA_OVERCOOKED_PUTFRIERINPLATERULE_H

#include "agent/rules/Rule/Rule.h"

namespace agent {
    namespace rules {

        class PutFrierInPlateRule : public Rule {
        public:
            PutFrierInPlateRule();
            void apply() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_PUTFRIERINPLATERULE_H
