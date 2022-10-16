
#ifndef POA_OVERCOOKED_ENVIRONMENT_H
#define POA_OVERCOOKED_ENVIRONMENT_H

#include "OrderList.h"
#include "Machine.h"
#include "Box.h"
#include "Table.h"
#include "Plate.h"

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
