
#include "OrderList.h"

namespace environment {
    OrderList::OrderList(): state{hasNoOrders} {}

    bool OrderList::hasRemainingOrders() {
        return state == hasOrders;
    }
} // environment
