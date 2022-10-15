#include <gtest/gtest.h>
#include "environment/OrderList.h"

using namespace environment;

TEST(Test_hasRemainingOrders, hasNoOrders) {
    OrderList orderList;

    orderList.state = hasNoOrders;

    EXPECT_FALSE(orderList.hasRemainingOrders());
}

TEST(Test_hasRemainingOrders, hasOrders) {
    OrderList orderList;

    orderList.state = hasOrders;

    EXPECT_TRUE(orderList.hasRemainingOrders());
}
