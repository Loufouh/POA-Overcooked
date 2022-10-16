#include <gtest/gtest.h>
#include "environment/Box/Box.h"

using namespace environment;

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