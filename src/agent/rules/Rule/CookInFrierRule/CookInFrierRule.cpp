
#include "CookInFrierRule.h"
#include "rules/Condition/CookInFrierCondition/CookInFrierCondition.h"
#include "rules/Action/CookInFrierAction/CookInFrierAction.h"
#include <iostream>

namespace agent {
    namespace rules {
        CookInFrierRule::CookInFrierRule() : Rule(CookInFrierCondition(), CookInFrierAction()) {}

        bool CookInFrierRule::apply() 
        {
            CookInFrierCondition CIFC;
            CookInFrierAction CIFA;

            // std::cout << "CookInFrierRule visited\n";

            if( CIFC.isVerified() )
            {
                CIFA.execute();
                return true;
            }
            
            return false;
        }
    } // agent
} // rules