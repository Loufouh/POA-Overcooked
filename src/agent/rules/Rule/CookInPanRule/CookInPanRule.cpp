
#include "CookInPanRule.h"
#include "rules/Condition/CookInPanCondition/CookInPanCondition.h"
#include "rules/Action/CookInPanAction/CookInPanAction.h"
#include <iostream>

namespace agent {
    namespace rules {
        CookInPanRule::CookInPanRule() : Rule(CookInPanCondition(), CookInPanAction()) {}

        bool CookInPanRule::apply() 
        {
            CookInPanCondition CIPC; 
            CookInPanAction CIPA;

            // std::cout << "CookInPanRule visited\n";

            if(CIPC.isVerified()) 
            {
                CIPA.execute();
                return true;
            }
            
            return false;
        }
    } // agent
} // rules