
#include "EmptyBoxRule.h"
#include "rules/Condition/EmptyBoxCondition/EmptyBoxCondition.h"
#include "rules/Action/EmptyBoxAction/EmptyBoxAction.h"

namespace agent {
    namespace rules {
        EmptyBoxRule::EmptyBoxRule() : Rule(EmptyBoxCondition(), EmptyBoxAction()) {}

        bool EmptyBoxRule::apply() 
        {
            EmptyBoxCondition EBC;
            EmptyBoxAction EBA;

            std::cout << "EmptyBoxRule visited\n";

            if( EBC.isVerified() )
            {
                EBA.execute();
                return true;
            }
            
            return false;
        }
    } // agent
} // rules