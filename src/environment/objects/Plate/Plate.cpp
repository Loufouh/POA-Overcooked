
#include "Plate.h"

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
    }
}