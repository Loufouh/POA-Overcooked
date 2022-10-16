
#include "OrderList.h"

namespace environment {
    OrderList::OrderList(): state{OrderListState::hasNoOrders} {}

    bool OrderList::hasRemainingOrders() {
        return state == OrderListState::hasOrders;
    }
} // environment
