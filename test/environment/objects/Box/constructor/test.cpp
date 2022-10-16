#include <gtest/gtest.h>
#include "environment/objects/Box/Box.h"

using namespace environment::objects;

TEST(environment_objects_Box_constructor, state) {
    Box box;

    EXPECT_EQ(
        box.state,
        BoxState::notEmpty
    );
}
