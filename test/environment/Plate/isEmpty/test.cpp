#include <gtest/gtest.h>
#include "environment/Plate.h"

using namespace environment;

TEST(Plate_isEmpty, emptyState) {
    Plate plate;

    plate.state = PlateState::empty;

    EXPECT_TRUE(plate.isEmpty());
}

TEST(Plate_isEmpty, steackOnlyState) {
    Plate plate;

    plate.state = PlateState::steackOnly;

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
