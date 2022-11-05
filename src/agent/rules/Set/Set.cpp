
#include "Set.h"
#include <iostream>

namespace agent {
    namespace rules {
        Set::Set()
        {
            ruleSet.push_back( new BeginCookingRule() );
            ruleSet.push_back( new CookInFrierRule() );
            ruleSet.push_back( new CookInPanRule() );
            ruleSet.push_back( new EmptyBoxRule() );
            ruleSet.push_back( new HasProblemFrierRule() );
            ruleSet.push_back( new HasProblemPanRule() );
            ruleSet.push_back( new PlateIsReadyRule() );
            ruleSet.push_back( new PutFrierInPlateRule() );
            ruleSet.push_back( new PutPanInPlateRule() );
            ruleSet.push_back( new PutPlateOnTableRule() );
        }

        void Set::applyAll()
        {
            BeginCookingRule BCR;
            CookInFrierRule CIFR;
            CookInPanRule CIPR;
            EmptyBoxRule EBR;
            HasProblemFrierRule HPFR;
            HasProblemPanRule HPPR;
            PlateIsReadyRule PIRR;
            PutFrierInPlateRule PFIPR;
            PutPanInPlateRule PPIPR;
            PutPlateOnTableRule PPOTR;

            if( BCR.apply() ) return;
            if( CIFR.apply() ) return;
            if( CIPR.apply() ) return;
            if( EBR.apply() ) return;
            if( HPFR.apply() ) return;
            if( HPPR.apply() ) return;
            if( PIRR.apply() ) return;
            if( PFIPR.apply() ) return;
            if( PPIPR.apply() ) return;
            if( PPOTR.apply() ) return;
            /*
            std::cout << '\n';
            int i = 0;
            
            for( int i = 0; i < ruleSet.size(); i++ )
            {
                if( ruleSet[i]->apply() )
                    return;
            }
            for( Rule* r : ruleSet )
            {
                if( r->apply() )
                    return;
                
                std::cout << i++ << '\n';
            }*/
            
            std::cout << "I did not do anything !\n";
        }   
    }
}