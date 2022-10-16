add_executable(
        Test_Environment_default
        test.cpp
)
target_link_libraries(
        Test_Environment_default
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Environment_default PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_Environment_default)
