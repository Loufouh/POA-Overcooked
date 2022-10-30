
#include "Table.h"
#include <iostream>

namespace environment {
    namespace objects {
        Table::Table() : state{TableState::hasNoPlate} {}

        bool Table::hasPlate() {
            return state == TableState::hasPlate;
        }

        void Table::setPlate() { state = TableState::hasPlate; }
        void Table::setNoPlate() { state = TableState::hasNoPlate; }

        void Table::print_state()
        {
            switch( state )
            {
                case TableState::hasPlate : std::cout << "has a plate"; break;
                case TableState::hasNoPlate : std::cout << "has not any plates"; break;
                default : std::cout << "?"; break;
            }
        }
    }
}