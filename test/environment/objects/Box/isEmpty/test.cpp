#include <gtest/gtest.h>
#include "environment/objects/Box/Box.h"

using namespace environment::objects;

TEST(environment_objects_Box_isEmpty, emptyState) {
    Box box;

    box.state = BoxState::empty;

    EXPECT_TRUE(box.isEmpty());
}

TEST(environment_objects_Box_isEmpty, notEmptyState) {
    Box box;

    box.state = BoxState::notEmpty;

    EXPECT_FALSE(box.isEmpty());
}