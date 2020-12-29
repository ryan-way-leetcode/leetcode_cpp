#include <gtest/gtest.h>
#include "../../../../include/med/8StringToInteger.hpp"

using namespace StringToInteger;

TEST(StringToInteger, Example1)
{
  Solution sol;
  int i = 0;

  EXPECT_EQ(sol.stringtointegerMethod(0), 0);
}

TEST(StringToInteger, Example2)
{
  Solution sol;
  int i = 5;

  EXPECT_EQ(sol.stringtointegerMethod(1), 1);
}
