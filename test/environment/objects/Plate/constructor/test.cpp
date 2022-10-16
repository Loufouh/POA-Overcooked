#include <gtest/gtest.h>
#include "environment/objects/Plate/Plate.h"

using namespace environment::objects;

TEST(environment_objects_Plate_constructor, state) {
    Plate plate;

    EXPECT_EQ(
        plate.state,
        PlateState::empty
    );
}
