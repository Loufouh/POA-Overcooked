
#include "Plate.h"

namespace environment {
    Plate::Plate(): state{empty} {}

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
} // environment