add_executable(
        Test_Plate_containsSteak
        test.cpp
)
target_link_libraries(
        Test_Plate_containsSteak
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_Plate_containsSteak PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_Plate_containsSteak)
