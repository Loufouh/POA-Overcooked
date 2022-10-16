add_executable(
        Test_environment_objects_Table_hasPlate
        test.cpp
)
target_link_libraries(
        Test_environment_objects_Table_hasPlate
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_environment_objects_Table_hasPlate PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_environment_objects_Table_hasPlate)
