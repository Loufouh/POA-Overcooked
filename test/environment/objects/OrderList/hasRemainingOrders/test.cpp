#include <gtest/gtest.h>
#include "environment/objects/OrderList/OrderList.h"

using namespace environment::objects;

TEST(environment_objects_OrerList_hasRemainingOrders, hasNoOrdersState) {
    OrderList orderList;

    orderList.state = OrderListState::hasNoOrders;

    EXPECT_FALSE(orderList.hasRemainingOrders());
}

TEST(environment_objects_OrderList_hasRemainingOrders, hasOrdersState) {
    OrderList orderList;

    orderList.state = OrderListState::hasOrders;

    EXPECT_TRUE(orderList.hasRemainingOrders());
}
