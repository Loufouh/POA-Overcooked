#include <gtest/gtest.h>
#include "environment/Machine/Machine.h"

using namespace environment;

TEST(Machine_isFree, freeState) {
    Machine machine;

    machine.state = MachineState::free;

    EXPECT_TRUE(machine.isFree());
}

TEST(Machine_isFree, cookingState) {
    Machine machine;

    machine.state = MachineState::cooking;

    EXPECT_FALSE(machine.isFree());
}

TEST(Machine_isFree, readyState) {
    Machine machine;

    machine.state = MachineState::ready;

    EXPECT_FALSE(machine.isFree());
}

TEST(Machine_isFree, hasProblemState) {
    Machine machine;

    machine.state = MachineState::hasProblem;

    EXPECT_FALSE(machine.isFree());
}
