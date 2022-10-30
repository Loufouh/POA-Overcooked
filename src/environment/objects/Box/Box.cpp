
#include "Box.h"
#include <iostream>

namespace environment {
    namespace objects {
        Box::Box() : state{BoxState::notEmpty} {}

        bool Box::isEmpty() {
            return state == BoxState::empty;
        }

        void Box::print_state()
        {
            switch( state )
            {
                case BoxState::empty : std::cout << "Empty"; break;
                case BoxState::notEmpty : std::cout << "Not empty"; break;
                default : std::cout << "?"; break;
            }
        }
    }
}