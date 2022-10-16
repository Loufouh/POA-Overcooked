add_executable(
        Test_Controller_getInstance_ptr
        test.cpp
)
target_link_libraries(
        Test_Controller_getInstance_ptr
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Controller_getInstance_ptr PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_Controller_getInstance_ptr)
