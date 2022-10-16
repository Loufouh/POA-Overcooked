
#include "Table.h"

namespace environment {
    Table::Table(): state{hasNoPlate} {}

    bool Table::hasPlate() {
        return state == TableState::hasPlate;
    }
} // environment