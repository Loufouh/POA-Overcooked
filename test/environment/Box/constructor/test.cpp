#include <gtest/gtest.h>
#include "environment/Box.h"

using namespace environment;

TEST(Box_constructor, state) {
    Box box;

    EXPECT_EQ(
        box.state,
        BoxState::notEmpty
    );
}
