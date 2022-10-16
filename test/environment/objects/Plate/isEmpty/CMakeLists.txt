add_executable(
        Test_Plate_isEmpty
        test.cpp
)
target_link_libraries(
        Test_Plate_isEmpty
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Plate_isEmpty PUBLIC
        "${PROJECT_BINARY_DIR}"
        "../../../../../src"
)

gtest_discover_tests(Test_Plate_isEmpty)
