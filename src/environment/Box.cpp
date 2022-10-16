
#include "Box.h"

namespace environment {
    Box::Box(): state{BoxState::notEmpty} {}

    bool Box::isEmpty() {
        return state == BoxState::empty;
    }
} // environment