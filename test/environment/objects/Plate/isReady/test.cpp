#include <gtest/gtest.h>
#include "environment/objects/Plate/Plate.h"

using namespace environment::objects;

TEST(environment_objects_isReady, emptyState) {
    Plate plate;

    plate.state = PlateState::empty;

    EXPECT_FALSE(plate.isReady());
}

TEST(environment_objects_isReady, steakOnlyState) {
    Plate plate;

    plate.state = PlateState::steakOnly;

    EXPECT_FALSE(plate.isReady());
}

TEST(environment_objects_isReady, friesOnlyState) {
    Plate plate;

    plate.state = PlateState::friesOnly;

    EXPECT_FALSE(plate.isReady());
}

TEST(environment_objects_isReady, readyState) {
    Plate plate;

    plate.state = PlateState::ready;

    EXPECT_TRUE(plate.isReady());
}
