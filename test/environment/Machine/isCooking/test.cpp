#include <gtest/gtest.h>
#include "environment/objects/Machine/Machine.h"

using namespace environment;

TEST(Machine_isCooking, freeState) {
    Machine machine;

    machine.state = MachineState::free;

    EXPECT_FALSE(machine.isCooking());
}

TEST(Machine_isCooking, cookingState) {
    Machine machine;

    machine.state = MachineState::cooking;

    EXPECT_TRUE(machine.isCooking());
}

TEST(Machine_isCooking, readyState) {
    Machine machine;

    machine.state = MachineState::ready;

    EXPECT_FALSE(machine.isCooking());
}

TEST(Machine_isCooking, hasProblemState) {
    Machine machine;

    machine.state = MachineState::hasProblem;

    EXPECT_FALSE(machine.isCooking());
}
