
#include "Table.h"

namespace environment {
    Table::Table(): state{TableState::hasNoPlate} {}

    bool Table::hasPlate() {
        return state == TableState::hasPlate;
    }
} // environment