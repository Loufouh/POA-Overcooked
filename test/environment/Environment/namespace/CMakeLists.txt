add_executable(
        Test_Environment_namespace
        test.cpp
)
target_link_libraries(
        Test_Environment_namespace
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Environment_namespace PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_Environment_namespace)
