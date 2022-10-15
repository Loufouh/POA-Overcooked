#include <gtest/gtest.h>
#include "environment/OrderList.h"

using namespace environment;

TEST(OrerList_hasRemainingOrders, hasNoOrdersState) {
    OrderList orderList;

    orderList.state = hasNoOrders;

    EXPECT_FALSE(orderList.hasRemainingOrders());
}

TEST(OrderList_hasRemainingOrders, hasOrdersState) {
    OrderList orderList;

    orderList.state = hasOrders;

    EXPECT_TRUE(orderList.hasRemainingOrders());
}
