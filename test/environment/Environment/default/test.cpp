#include <gtest/gtest.h>
#include "environment/Environment/Environment.h"
#include "environment/objects/OrderList/OrderList.h"
#include "environment/objects/Machine/Machine.h"
#include "environment/objects/Box/Box.h"
#include "environment/objects/Table/Table.h"
#include "environment/objects/Plate/Plate.h"

using namespace environment;
using namespace objects;

TEST(environment_Environment_default, orderList) {
    Environment &environment = *Environment::getInstance_ptr();

    OrderList orderList = environment.orderList;
}

TEST(environment_Environment_default, pan) {
    Environment &environment = *Environment::getInstance_ptr();

    Machine pan = environment.pan;
}

TEST(environment_Environment_default, frier) {
    Environment &environment = *Environment::getInstance_ptr();

    Machine frier = environment.frier;
}

TEST(environment_Environment_default, steaksBox) {
    Environment &environment = *Environment::getInstance_ptr();

    Box steaksBox = environment.steaksBox;
}

TEST(environment_Environment_default, friesBox) {
    Environment &environment = *Environment::getInstance_ptr();

    Box friesBox = environment.friesBox;
}

TEST(environment_Environment_default, platesBox) {
    Environment &environment = *Environment::getInstance_ptr();

    Box platesBox = environment.platesBox;
}

TEST(environment_Environment_default, table) {
    Environment &environment = *Environment::getInstance_ptr();

    Table table = environment.table;
}

TEST(environment_Environment_default, plate) {
    Environment &environment = *Environment::getInstance_ptr();

    Plate plate = environment.plate;
}
