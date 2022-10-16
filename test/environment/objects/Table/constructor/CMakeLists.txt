add_executable(
        Test_Table_constructor
        test.cpp
)
target_link_libraries(
        Test_Table_constructor
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Table_constructor PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_Table_constructor)
