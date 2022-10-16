#include <gtest/gtest.h>
#include "environment/objects/OrderList/OrderList.h"

using namespace environment;

TEST(OrerList_hasRemainingOrders, hasNoOrdersState) {
    OrderList orderList;

    orderList.state = OrderListState::hasNoOrders;

    EXPECT_FALSE(orderList.hasRemainingOrders());
}

TEST(OrderList_hasRemainingOrders, hasOrdersState) {
    OrderList orderList;

    orderList.state = OrderListState::hasOrders;

    EXPECT_TRUE(orderList.hasRemainingOrders());
}
