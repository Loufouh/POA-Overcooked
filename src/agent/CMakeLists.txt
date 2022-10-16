add_library(
        agent
        rules/Condition/Condition.cpp rules/Condition/Condition.h
        rules/Action/Action.cpp rules/Action/Action.h
)
target_include_directories(
        agent PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
        "${PROJECT_SOURCE_DIR}/src/agent"
)