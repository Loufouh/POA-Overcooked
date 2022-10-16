#include <gtest/gtest.h>
#include "environment/objects/Plate/Plate.h"

using namespace environment::objects;

TEST(environment_objects_containsFries, emptyState) {
    Plate plate;

    plate.state = PlateState::empty;

    EXPECT_FALSE(plate.containsFries());
}

TEST(environment_objects_containsFries, steakOnlyState) {
    Plate plate;

    plate.state = PlateState::steakOnly;

    EXPECT_FALSE(plate.containsFries());
}

TEST(environment_objects_containsFries, friesOnlyState) {
    Plate plate;

    plate.state = PlateState::friesOnly;

    EXPECT_TRUE(plate.containsFries());
}

TEST(environment_objects_containsFries, readyState) {
    Plate plate;

    plate.state = PlateState::ready;

    EXPECT_TRUE(plate.containsFries());
}
