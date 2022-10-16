
#include "Table.h"

namespace environment {
    namespace objects {
        Table::Table() : state{TableState::hasNoPlate} {}

        bool Table::hasPlate() {
            return state == TableState::hasPlate;
        }
    }
}