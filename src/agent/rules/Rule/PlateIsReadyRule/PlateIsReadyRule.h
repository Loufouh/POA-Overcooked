
#ifndef POA_OVERCOOKED_PLATEISREADYRULE_H
#define POA_OVERCOOKED_PLATEISREADYRULE_H

#include "agent/rules/Rule/Rule.h"

namespace agent {
    namespace rules {

        class PlateIsReadyRule : public Rule {
        public:
            PlateIsReadyRule();
            void apply() override;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_PLATEISREADYRULE_H
