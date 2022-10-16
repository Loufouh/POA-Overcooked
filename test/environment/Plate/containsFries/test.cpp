#include <gtest/gtest.h>
#include "environment/Plate/Plate.h"

using namespace environment;

TEST(Plate_containsFries, emptyState) {
    Plate plate;

    plate.state = PlateState::empty;

    EXPECT_FALSE(plate.containsFries());
}

TEST(Plate_containsFries, steakOnlyState) {
    Plate plate;

    plate.state = PlateState::steakOnly;

    EXPECT_FALSE(plate.containsFries());
}

TEST(Plate_containsFries, friesOnlyState) {
    Plate plate;

    plate.state = PlateState::friesOnly;

    EXPECT_TRUE(plate.containsFries());
}

TEST(Plate_containsFries, readyState) {
    Plate plate;

    plate.state = PlateState::ready;

    EXPECT_TRUE(plate.containsFries());
}
