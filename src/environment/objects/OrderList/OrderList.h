
#ifndef POA_OVERCOOKED_ORDERLIST_H
#define POA_OVERCOOKED_ORDERLIST_H

namespace environment {
    namespace objects {
        enum class OrderListState {
            hasOrders,
            hasNoOrders
        };

        class OrderList {
        public:
            OrderListState state;

            OrderList();

            bool hasRemainingOrders();
            
            void print_state();
        };
    }
}

#endif //POA_OVERCOOKED_ORDERLIST_H
