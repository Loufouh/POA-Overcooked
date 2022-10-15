#include <gtest/gtest.h>
#include "environment/OrderList.h"

using namespace environment;

TEST(Test_constructor, state) {
    OrderList orderList;

    EXPECT_EQ(
        orderList.state,
        OrderListState::hasNoOrders
    );
}
