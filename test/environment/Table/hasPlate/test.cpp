#include <gtest/gtest.h>
#include "environment/Table/Table.h"

using namespace environment;

TEST(Table_hasPlate, hasNoPlateState) {
    Table table;

    table.state = TableState::hasNoPlate;

    EXPECT_FALSE(table.hasPlate());
}

TEST(Table_hasPlate, hasPlateState) {
    Table table;

    table.state = TableState::hasPlate;

    EXPECT_TRUE(table.hasPlate());
}
