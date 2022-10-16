#include <gtest/gtest.h>
#include "environment/objects/Machine/Machine.h"

using namespace environment::objects;

TEST(environment_objects_Machine_constructor, state) {
    Machine machine;

    EXPECT_EQ(
            machine.state,
            MachineState::free
    );
}
