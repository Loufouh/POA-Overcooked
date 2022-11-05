#include "agent/rules/Rule/BeginCookingRule/BeginCookingRule.h"
#include "agent/rules/Rule/CookInFrierRule/CookInFrierRule.h"
#include "agent/rules/Rule/CookInPanRule/CookInPanRule.h"
#include "agent/rules/Rule/EmptyBoxRule/EmptyBoxRule.h"
#include "agent/rules/Rule/HasProblemFrierRule/HasProblemFrierRule.h"
#include "agent/rules/Rule/HasProblemPanRule/HasProblemPanRule.h"
#include "agent/rules/Rule/PlateIsReadyRule/PlateIsReadyRule.h"
#include "agent/rules/Rule/PutFrierInPlateRule/PutFrierInPlateRule.h"
#include "agent/rules/Rule/PutPanInPlateRule/PutPanInPlateRule.h"
#include "agent/rules/Rule/PutPlateOnTableRule/PutPlateOnTableRule.h"
#include "agent/rules/Rule/Rule.h"
#include <vector>

#ifndef POA_OVERCOOKED_SET_H
#define POA_OVERCOOKED_SET_H

namespace agent {
    namespace rules {

        class Set {
            private : 
                std::vector<Rule*> ruleSet;
                /*
                ~Set()
                {
                    for( int i = 0; i < ruleSet.size(); i++ )
                        delete ruleSet[i];
                }*/
                
            public : 
                Set();
                void applyAll();

        };

    }
}

#endif //POA_OVERCOOKED_SET_H
