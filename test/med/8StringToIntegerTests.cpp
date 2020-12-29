#include <gtest/gtest.h>
#include "../../../../include/med/8StringToInteger.hpp"

using namespace StringToInteger;

TEST(StringToInteger, Example1)
{
  Solution sol;
  string input = "42";
  int output = 42;

  EXPECT_EQ(sol.myAtoi(input), output);
}

TEST(StringToInteger, Example2)
{
  Solution sol;
  string input = "  -42";
  int output = -42;

  EXPECT_EQ(sol.myAtoi(input), output);
}

TEST(StringToInteger, Example3)
{
  Solution sol;
  string input = "4193 with words";
  int output = 4193;

  EXPECT_EQ(sol.myAtoi(input), output);
}

TEST(StringToInteger, Example4)
{
  Solution sol;
  string input = "words and 987";
  int output = 0;

  EXPECT_EQ(sol.myAtoi(input), output);
}

TEST(StringToInteger, Example5)
{
  Solution sol;
  string input = "-91283472332";
  int output = -2147483648;

  EXPECT_EQ(sol.myAtoi(input), output);
}
