
#include "Plate.h"
#include <iostream>

namespace environment {
    namespace objects {
        Plate::Plate() : state{PlateState::empty} {}

        bool Plate::isEmpty() {
            return state == PlateState::empty;
        }

        bool Plate::isReady() {
            return state == PlateState::ready;
        }

        bool Plate::containsSteak() {
            return state == PlateState::steakOnly
                   || state == PlateState::ready;
        }

        bool Plate::containsFries() {
            return state == PlateState::friesOnly
                   || state == PlateState::ready;
        }

        void Plate::print_state()
        {
            switch( state )
            {
                case PlateState::empty : std::cout << "empty"; break;
                case PlateState::steakOnly : std::cout << "has a steak"; break;
                case PlateState::friesOnly : std::cout << "has fries"; break;
                case PlateState::ready : std::cout << "has a steak and fries"; break;
                default : std::cout << "?"; break;
            }
        }
    }
}