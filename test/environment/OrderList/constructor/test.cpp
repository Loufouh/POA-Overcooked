#include <gtest/gtest.h>
#include "environment/OrderList/OrderList.h"

using namespace environment;

TEST(OrderList_constructor, state) {
    OrderList orderList;

    EXPECT_EQ(
        orderList.state,
        OrderListState::hasNoOrders
    );
}
