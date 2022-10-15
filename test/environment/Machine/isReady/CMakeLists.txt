add_executable(
        Test_Machine_isReady
        test.cpp
)
target_link_libraries(
        Test_Machine_isReady
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Machine_isReady PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_Machine_isReady)
