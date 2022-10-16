#include <gtest/gtest.h>
#include "environment/objects/Box/Box.h"

using namespace environment::objects;

TEST(Box_isEmpty, emptyState) {
    Box box;

    box.state = BoxState::empty;

    EXPECT_TRUE(box.isEmpty());
}

TEST(Box_isEmpty, notEmptyState) {
    Box box;

    box.state = BoxState::notEmpty;

    EXPECT_FALSE(box.isEmpty());
}