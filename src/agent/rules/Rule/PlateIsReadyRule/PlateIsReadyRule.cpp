
#include "PlateIsReadyRule.h"
#include "rules/Condition/PlateIsReadyCondition/PlateIsReadyCondition.h"
#include "rules/Action/PlateIsReadyAction/PlateIsReadyAction.h"

namespace agent {
    namespace rules {
        PlateIsReadyRule::PlateIsReadyRule() : Rule(PlateIsReadyCondition(), PlateIsReadyAction()) {}

        bool PlateIsReadyRule::apply() 
        {
            PlateIsReadyCondition PIRC;
            PlateIsReadyAction PIRA;

            std::cout << "PlateIsReadyRule visited\n";

            if( PIRC.isVerified() )
            {
                PIRA.execute();
                return true;
            }
            
            return false;
        }
    } // agent
} // rules