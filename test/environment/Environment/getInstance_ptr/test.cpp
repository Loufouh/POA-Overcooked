#include <gtest/gtest.h>
#include "environment/Environment.h"

using namespace environment;

TEST(Environment_getInstance_ptr, oneCall) {
    Environment *environment = Environment::getInstance_ptr();
}

TEST(Environment_getInstance_ptr, twoCalls) {
    Environment *environment1 = Environment::getInstance_ptr();
    Environment *environment2 = Environment::getInstance_ptr();

    EXPECT_EQ(environment1, environment2);
}
