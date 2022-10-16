
#ifndef POA_OVERCOOKED_ENVIRONMENT_H
#define POA_OVERCOOKED_ENVIRONMENT_H

#include "../OrderList/OrderList.h"
#include "../Machine/Machine.h"
#include "../Box/Box.h"
#include "../Table/Table.h"
#include "../Plate/Plate.h"

namespace environment {

    class Environment {
    private:
        static Environment *instance_ptr;

        Environment();
    public:
        static Environment *getInstance_ptr();

        OrderList orderList;

        Machine pan;
        Machine frier;

        Box steaksBox;
        Box friesBox;
        Box platesBox;

        Table table;

        Plate plate;
    };

} // environment

#endif //POA_OVERCOOKED_ENVIRONMENT_H
