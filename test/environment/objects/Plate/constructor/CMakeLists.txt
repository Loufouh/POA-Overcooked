add_executable(
        Test_Plate_constructor
        test.cpp
)
target_link_libraries(
        Test_Plate_constructor
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Plate_constructor PUBLIC
        "${PROJECT_BINARY_DIR}"
        "../../../../../src"
)

gtest_discover_tests(Test_Plate_constructor)
