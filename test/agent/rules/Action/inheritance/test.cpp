#include <gtest/gtest.h>
#include "agent/rules/Action/Action.h"

using namespace agent::rules;

class InheritedAction : public Action {
    public:
    void execute() override {}
};

TEST(agent_rules_Action_inheritance, inherit) {
    InheritedAction condition;

    condition.execute();
}
