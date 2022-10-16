
#include "Box.h"

namespace environment {
    namespace objects {
        Box::Box() : state{BoxState::notEmpty} {}

        bool Box::isEmpty() {
            return state == BoxState::empty;
        }
    }
} // environment