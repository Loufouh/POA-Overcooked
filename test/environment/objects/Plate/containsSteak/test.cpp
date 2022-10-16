#include <gtest/gtest.h>
#include "environment/objects/Plate/Plate.h"

using namespace environment::objects;

TEST(environment_objects_containsSteak, emptyState) {
    Plate plate;

    plate.state = PlateState::empty;

    EXPECT_FALSE(plate.containsSteak());
}

TEST(environment_objects_containsSteak, steakOnlyState) {
    Plate plate;

    plate.state = PlateState::steakOnly;

    EXPECT_TRUE(plate.containsSteak());
}

TEST(environment_objects_containsSteak, friesOnlyState) {
    Plate plate;

    plate.state = PlateState::friesOnly;

    EXPECT_FALSE(plate.containsSteak());
}

TEST(environment_objects_containsSteak, readyState) {
    Plate plate;

    plate.state = PlateState::ready;

    EXPECT_TRUE(plate.containsSteak());
}
