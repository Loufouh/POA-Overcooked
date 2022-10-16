#include <gtest/gtest.h>
#include "environment/objects/Table/Table.h"

using namespace environment::objects;

TEST(environment_objects_Table_constructor, state) {
    Table table;

    EXPECT_EQ(
        table.state,
        TableState::hasNoPlate
    );
}
