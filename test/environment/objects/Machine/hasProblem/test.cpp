#include <gtest/gtest.h>
#include "environment/objects/Machine/Machine.h"

using namespace environment::objects;

TEST(environment_objects_Machine_hasProblem, freeState) {
    Machine machine;

    machine.state = MachineState::free;

    EXPECT_FALSE(machine.hasProblem());
}

TEST(environment_objects_Machine_hasProblem, cookingState) {
    Machine machine;

    machine.state = MachineState::cooking;

    EXPECT_FALSE(machine.hasProblem());
}

TEST(environment_objects_Machine_hasProblem, readyState) {
    Machine machine;

    machine.state = MachineState::ready;

    EXPECT_FALSE(machine.hasProblem());
}

TEST(environment_objects_Machine_hasProblem, hasProblemState) {
    Machine machine;

    machine.state = MachineState::hasProblem;

    EXPECT_TRUE(machine.hasProblem());
}
