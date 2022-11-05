
#include "PutPlateOnTableRule.h"
#include "rules/Condition/PutPlateOnTableCondition/PutPlateOnTableCondition.h"
#include "rules/Action/PutPlateOnTableAction/PutPlateOnTableAction.h"

namespace agent {
    namespace rules {
        PutPlateOnTableRule::PutPlateOnTableRule() : Rule(PutPlateOnTableCondition(), PutPlateOnTableAction()) {}

        bool PutPlateOnTableRule::apply() 
        {
            PutPlateOnTableCondition PPOTC;
            PutPlateOnTableAction PPOTA;

            std::cout << "PutPlateOnTableRule visited\n";

            if( PPOTC.isVerified() )
            {
                PPOTA.execute();
                return true;
            }
            
            return false;
        }
    } // agent
} // rules