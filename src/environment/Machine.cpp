
#include "Machine.h"

namespace environment {
    Machine::Machine(): state{free} {}

    bool Machine::isFree() {
        return state == free;
    }

    bool Machine::isCooking() {
        return state == cooking;
    }

    bool Machine::isReady() {
        return state == ready;
    }
} // environment