add_executable(
        Test_Table_namespace
        test.cpp
)
target_link_libraries(
        Test_Table_namespace
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Table_namespace PUBLIC
        "${PROJECT_BINARY_DIR}"
        "../../../../../src"
)

gtest_discover_tests(Test_Table_namespace)
