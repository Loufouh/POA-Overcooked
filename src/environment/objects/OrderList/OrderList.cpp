
#include "OrderList.h"
#include <iostream>

namespace environment {
    namespace objects {
        OrderList::OrderList() : state{OrderListState::hasNoOrders} {}

        bool OrderList::hasRemainingOrders() {
            return state == OrderListState::hasOrders;
        }

        void OrderList::print_state()
        {
            switch( state )
            {
                case OrderListState::hasOrders : std::cout << "has orders"; break;
                case OrderListState::hasNoOrders : std::cout << "has not any orders"; break;
                default : std::cout << "1"; break;
            }
        }
    }
}
