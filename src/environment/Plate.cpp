
#include "Plate.h"

namespace environment {
    Plate::Plate(): state{empty} {}

    bool Plate::isEmpty() {
        return state == PlateState::empty;
    }
} // environment