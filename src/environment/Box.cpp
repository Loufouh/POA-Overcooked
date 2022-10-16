
#include "Box.h"

namespace environment {
    Box::Box(): state{notEmpty} {}

    bool Box::isEmpty() {
        return state == empty;
    }
} // environment