
#include "Machine.h"

namespace environment {
    Machine::Machine(): state{free} {}

    bool Machine::isFree() {
        return state == free;
    }
} // environment