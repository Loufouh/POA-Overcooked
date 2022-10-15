add_executable(
        Test_Machine_isCooking
        test.cpp
)
target_link_libraries(
        Test_Machine_isCooking
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Machine_isCooking PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_Machine_isCooking)
