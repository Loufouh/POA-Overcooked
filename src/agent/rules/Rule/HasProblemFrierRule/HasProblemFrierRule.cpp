
#include "HasProblemFrierRule.h"
#include "rules/Condition/HasProblemFrierCondition/HasProblemFrierCondition.h"
#include "rules/Action/HasProblemFrierAction/HasProblemFrierAction.h"

namespace agent {
    namespace rules {
        HasProblemFrierRule::HasProblemFrierRule() : Rule(HasProblemFrierCondition(), HasProblemFrierAction()) {}

        bool HasProblemFrierRule::apply() 
        {
            HasProblemFrierCondition HPFC;
            HasProblemFrierAction HPFA;

            // std::cout << "HasProblemFrierRule visited\n";

            if( HPFC.isVerified() )
            {
                HPFA.execute();
                return true;
            }
            
            return false;
        }
    } // agent
} // rules