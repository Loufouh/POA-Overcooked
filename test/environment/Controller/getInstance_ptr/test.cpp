#include <gtest/gtest.h>
#include "environment/Controller.h"

using namespace environment;

TEST(Controller_getInstance_ptr, oneCall) {
    Controller *controller = Controller::getInstance_ptr();

    EXPECT_NE(controller, nullptr);
}

TEST(Controller_getInstance_ptr, twoCalls) {
    Controller *controller1 = Controller::getInstance_ptr();
    Controller *controller2 = Controller::getInstance_ptr();

    EXPECT_EQ(controller1, controller2);
}