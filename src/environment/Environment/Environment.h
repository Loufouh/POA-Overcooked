
#ifndef POA_OVERCOOKED_ENVIRONMENT_H
#define POA_OVERCOOKED_ENVIRONMENT_H

#include "environment/objects/OrderList/OrderList.h"
#include "environment/objects/Machine/Machine.h"
#include "environment/objects/Box/Box.h"
#include "environment/objects/Table/Table.h"
#include "environment/objects/Plate/Plate.h"

namespace environment {
    using namespace objects;

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
}

#endif //POA_OVERCOOKED_ENVIRONMENT_H
