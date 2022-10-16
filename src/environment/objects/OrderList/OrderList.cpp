
#include "OrderList.h"

namespace environment {
    namespace objects {
        OrderList::OrderList() : state{OrderListState::hasNoOrders} {}

        bool OrderList::hasRemainingOrders() {
            return state == OrderListState::hasOrders;
        }
    }
}
