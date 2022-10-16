add_executable(
        Test_Plate_containsFries
        test.cpp
)
target_link_libraries(
        Test_Plate_containsFries
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Plate_containsFries PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_Plate_containsFries)
