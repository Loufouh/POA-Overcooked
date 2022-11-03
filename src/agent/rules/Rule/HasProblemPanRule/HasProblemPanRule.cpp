
#include "HasProblemPanRule.h"
#include "rules/Condition/HasProblemPanCondition/HasProblemPanCondition.h"
#include "rules/Action/HasProblemPanAction/HasProblemPanAction.h"

namespace agent {
    namespace rules {
        HasProblemPanRule::HasProblemPanRule() : Rule(HasProblemPanCondition(), HasProblemPanAction()) {}

        bool HasProblemPanRule::apply() 
        {
            HasProblemPanCondition HPPC;
            HasProblemPanAction HPPA;

            std::cout << "HasProblemPanRule visited\n";

            if( HPPC.isVerified() )
            {
                HPPA.execute();
                return true;
            }
            
            return false;
        }
    } // agent
} // rules