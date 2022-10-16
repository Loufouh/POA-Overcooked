add_executable(
        Test_Machine_namespace
        test.cpp
)
target_link_libraries(
        Test_Machine_namespace
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Machine_namespace PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_Machine_namespace)
