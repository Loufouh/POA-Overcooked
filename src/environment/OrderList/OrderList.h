
#ifndef POA_OVERCOOKED_ORDERLIST_H
#define POA_OVERCOOKED_ORDERLIST_H

namespace environment {
    enum class OrderListState {
        hasOrders,
        hasNoOrders
    };

    class OrderList {
    public:
        OrderListState state;

        OrderList();

        bool hasRemainingOrders();
    };

} // environment

#endif //POA_OVERCOOKED_ORDERLIST_H
