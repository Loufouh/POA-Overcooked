#include <gtest/gtest.h>
#include "objects/OrderList/OrderList.h"

using namespace environment::objects;

TEST(OrderList_constructor, state) {
    OrderList orderList;

    EXPECT_EQ(
        orderList.state,
        OrderListState::hasNoOrders
    );
}
