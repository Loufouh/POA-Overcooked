add_executable(
        Test_Machine_constructor
        test.cpp
)
target_link_libraries(
        Test_Machine_constructor
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Machine_constructor PUBLIC
        "${PROJECT_BINARY_DIR}"
        "../../../../../src"
)

gtest_discover_tests(Test_Machine_constructor)
