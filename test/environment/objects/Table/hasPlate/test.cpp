#include <gtest/gtest.h>
#include "environment/objects/Table/Table.h"

using namespace environment::objects;

TEST(environment_objects_Table_hasPlate, hasNoPlateState) {
    Table table;

    table.state = TableState::hasNoPlate;

    EXPECT_FALSE(table.hasPlate());
}

TEST(environment_objects_Table_hasPlate, hasPlateState) {
    Table table;

    table.state = TableState::hasPlate;

    EXPECT_TRUE(table.hasPlate());
}
