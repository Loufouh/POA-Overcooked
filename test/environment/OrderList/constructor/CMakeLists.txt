add_executable(
        Test_constructor
        test.cpp
)
target_link_libraries(
        Test_constructor
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_constructor PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_constructor)
