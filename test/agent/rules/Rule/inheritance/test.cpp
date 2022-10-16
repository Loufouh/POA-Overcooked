#include <gtest/gtest.h>
#include "agent/rules/Rule/Rule.h"

using namespace agent::rules;

class InheritedRule : public Rule {
    public:
    void apply() override {}
};

TEST(agent_rules_Rule_inheritance, inherit) {
    InheritedRule condition;

    condition.apply();
}
