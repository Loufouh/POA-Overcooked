#include <gtest/gtest.h>
#include "environment/Plate.h"

using namespace environment;

TEST(Plate_isReady, emptyState) {
    Plate plate;

    plate.state = PlateState::empty;

    EXPECT_FALSE(plate.isReady());
}

TEST(Plate_isReady, steackOnlyState) {
    Plate plate;

    plate.state = PlateState::steackOnly;

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
