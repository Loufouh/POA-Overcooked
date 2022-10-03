add_executable(
  TestExample1
  example1.cpp
)
target_link_libraries(
  TestExample1
  #libToTest
  GTest::gtest_main
)
target_include_directories(
  TestExample1 PUBLIC
  "${PROJECT_BINARY_DIR}"
  "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(TestExample1)
