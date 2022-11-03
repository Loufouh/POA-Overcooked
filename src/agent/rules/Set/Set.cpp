
#include "Set.h"

namespace agent {
    namespace rules {
        Set::Set()
        {
            ruleSet.push_back( BeginCookingRule() );
            ruleSet.push_back( CookInFrierRule() );
            ruleSet.push_back( EmptyBoxRule() );
            ruleSet.push_back( HasProblemFrierRule() );
            ruleSet.push_back( HasProblemPanRule() );
            ruleSet.push_back( PlateIsReadyRule() );
            ruleSet.push_back( PutFrierInPlateRule() );
            ruleSet.push_back( PutPanInPlateRule() );
        }

        void Set::applyAll()
        {
            for( Rule r : ruleSet )
                if( r.apply() )
                    return;
        }   
    }
}