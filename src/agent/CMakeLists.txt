add_library(
        agent
        rules/Condition/Condition.cpp rules/Condition/Condition.h
        rules/Action/Action.cpp rules/Action/Action.h
        rules/Rule/Rule.cpp rules/Rule/Rule.h

        rules/Set/Set.cpp rules/Set/Set.h

        Agent/Agent.cpp Agent/Agent.h
        rules/Condition/BeginCookingCondition/BeginCookingCondition.cpp rules/Condition/BeginCookingCondition/BeginCookingCondition.h rules/Action/BeginCookingAction/BeginCookingAction.cpp rules/Action/BeginCookingAction/BeginCookingAction.h rules/Rule/BeginCookingRule/BeginCookingRule.cpp rules/Rule/BeginCookingRule/BeginCookingRule.h)
target_include_directories(
        agent PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
        "${PROJECT_SOURCE_DIR}/src/agent"
)