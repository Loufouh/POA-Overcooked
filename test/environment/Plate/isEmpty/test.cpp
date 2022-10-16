#include <gtest/gtest.h>
#include "environment/Plate.h"

using namespace environment;

TEST(Plate_isEmpty, emptyState) {
    Plate plate;

    plate.state = PlateState::empty;

    EXPECT_TRUE(plate.isEmpty());
}

TEST(Plate_isEmpty, steakOnlyState) {
    Plate plate;

    plate.state = PlateState::steakOnly;

    EXPECT_FALSE(plate.isEmpty());
}

TEST(Plate_isEmpty, friesOnlyState) {
    Plate plate;

    plate.state = PlateState::friesOnly;

    EXPECT_FALSE(plate.isEmpty());
}

TEST(Plate_isEmpty, readyState) {
    Plate plate;

    plate.state = PlateState::ready;

    EXPECT_FALSE(plate.isEmpty());
}
