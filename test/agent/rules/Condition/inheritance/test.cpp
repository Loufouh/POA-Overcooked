#include <gtest/gtest.h>
#include "agent/rules/Condition/Condition.h"

using namespace agent::rules;

class InheritedCondition : public Condition {
    public:
    bool isVerified() override {
        return true;
    }
};

TEST(agent_rules_Condition_inheritance, inherit) {
    InheritedCondition condition;

    EXPECT_TRUE(condition.isVerified());
}
