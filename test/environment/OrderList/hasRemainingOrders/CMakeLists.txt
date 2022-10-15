add_executable(
        Test_hasRemainingOrders
        test.cpp
)
target_link_libraries(
        Test_hasRemainingOrders
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_hasRemainingOrders PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_hasRemainingOrders)
