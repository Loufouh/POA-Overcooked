add_executable(
        Test_agent_rules_Agent_namespace
        test.cpp
)
target_link_libraries(
        Test_agent_rules_Agent_namespace
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_agent_rules_Agent_namespace PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_agent_rules_Agent_namespace)
