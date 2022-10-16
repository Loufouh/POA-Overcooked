add_executable(
        Test_OrderList_hasRemainingOrders
        test.cpp
)
target_link_libraries(
        Test_OrderList_hasRemainingOrders
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_OrderList_hasRemainingOrders PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_OrderList_hasRemainingOrders)
