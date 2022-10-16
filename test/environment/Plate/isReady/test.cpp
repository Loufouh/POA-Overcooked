#include <gtest/gtest.h>
#include "environment/Plate/Plate.h"

using namespace environment;

TEST(Plate_isReady, emptyState) {
    Plate plate;

    plate.state = PlateState::empty;

    EXPECT_FALSE(plate.isReady());
}

TEST(Plate_isReady, steakOnlyState) {
    Plate plate;

    plate.state = PlateState::steakOnly;

    EXPECT_FALSE(plate.isReady());
}

TEST(Plate_isReady, friesOnlyState) {
    Plate plate;

    plate.state = PlateState::friesOnly;

    EXPECT_FALSE(plate.isReady());
}

TEST(Plate_isReady, readyState) {
    Plate plate;

    plate.state = PlateState::ready;

    EXPECT_TRUE(plate.isReady());
}
