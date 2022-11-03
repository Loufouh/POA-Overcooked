
#include "PutFrierInPlateRule.h"
#include "rules/Condition/PutFrierInPlateCondition/PutFrierInPlateCondition.h"
#include "rules/Action/PutFrierInPlateAction/PutFrierInPlateAction.h"

namespace agent {
    namespace rules {
        PutFrierInPlateRule::PutFrierInPlateRule() : Rule(PutFrierInPlateCondition(), PutFrierInPlateAction()) {}

        bool PutFrierInPlateRule::apply() 
        {
            PutFrierInPlateCondition PFIPC;
            PutFrierInPlateAction PFIPA;

            std::cout << "PutFrierInPlateRule visited\n";

            if( PFIPC.isVerified() )
            {
                PFIPA.execute();
                return true;
            }
            
            return false;
        }
    } // agent
} // rules