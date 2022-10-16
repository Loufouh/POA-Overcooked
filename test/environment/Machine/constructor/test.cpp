#include <gtest/gtest.h>
#include "environment/Machine/Machine.h"

using namespace environment;

TEST(Machine_constructor, state) {
    Machine machine;

    EXPECT_EQ(
            machine.state,
            MachineState::free
    );
}
