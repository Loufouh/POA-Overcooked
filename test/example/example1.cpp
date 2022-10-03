#include <gtest/gtest.h>
//#include <libToTest.h>

TEST(TestExample1, test1) {
  int value = 1;

  EXPECT_EQ(1, value); 
}

TEST(TestExample1, test2) {
  int value = 12 * 11;

  EXPECT_EQ(132, value);
}

