add_executable(
        Test_OrderList_constructor
        test.cpp
)
target_link_libraries(
        Test_OrderList_constructor
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_OrderList_constructor PUBLIC
        "${PROJECT_BINARY_DIR}"
        "../../../../../src"
)

gtest_discover_tests(Test_OrderList_constructor)
