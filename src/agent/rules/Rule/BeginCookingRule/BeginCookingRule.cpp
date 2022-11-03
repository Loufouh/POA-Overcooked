
#include "BeginCookingRule.h"
#include "rules/Condition/BeginCookingCondition/BeginCookingCondition.h"
#include "rules/Action/BeginCookingAction/BeginCookingAction.h"
#include <iostream>

namespace agent {
    namespace rules {
        BeginCookingRule::BeginCookingRule() : Rule(BeginCookingCondition(), BeginCookingAction()) {}

        bool BeginCookingRule::apply() 
        {
            BeginCookingCondition BCC; 
            BeginCookingAction BCA;

            std::cout << "BeginCookingRule visited\n";

            if(BCC.isVerified()) 
            {
                BCA.execute();
                return true;
            }
            
            return false;
        }
    } // agent
} // rules