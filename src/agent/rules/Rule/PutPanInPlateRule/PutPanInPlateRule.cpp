
#include "PutPanInPlateRule.h"
#include "rules/Condition/PutPanInPlateCondition/PutPanInPlateCondition.h"
#include "rules/Action/PutPanInPlateAction/PutPanInPlateAction.h"

namespace agent {
    namespace rules {
        PutPanInPlateRule::PutPanInPlateRule() : Rule(PutPanInPlateCondition(), PutPanInPlateAction()) {}

        bool PutPanInPlateRule::apply() 
        {
            PutPanInPlateCondition PPIPC;
            PutPanInPlateAction PPIPA;

            std::cout << "PutPanInPlateRule visited\n";

            if( PPIPC.isVerified() )
            {
                PPIPA.execute();
                return true;
            }
            
            return false;
        }
    } // agent
} // rules