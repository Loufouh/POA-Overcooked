
#ifndef POA_OVERCOOKED_PUTPANINPLATERULE_H
#define POA_OVERCOOKED_PUTPANINPLATERULE_H

#include "agent/rules/Rule/Rule.h"

namespace agent {
    namespace rules {

        class PutPanInPlateRule : public Rule {
        public:
            PutPanInPlateRule();
            void apply() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_PUTPANINPLATERULE_H
