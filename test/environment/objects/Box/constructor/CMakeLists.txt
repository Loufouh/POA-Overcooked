add_executable(
        Test_Box_constructor
        test.cpp
)
target_link_libraries(
        Test_Box_constructor
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Box_constructor PUBLIC
        "${PROJECT_BINARY_DIR}"
        "../../../../../src"
)

gtest_discover_tests(Test_Box_constructor)
