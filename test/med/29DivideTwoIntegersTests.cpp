#include <gtest/gtest.h>
#include "../../../../include/med/29DivideTwoIntegers.hpp"

using namespace DivideTwoIntegers;

TEST(DivideTwoIntegers, Example1)
{
  Solution sol;
  int dividend = 10;
  int divisor = 3;
  int output = 3;

  EXPECT_EQ(sol.divide(dividend, divisor), output);
}

TEST(DivideTwoIntegers, Example2)
{
  Solution sol;
  int dividend = 7;
  int divisor = -3;
  int output = -2;

  EXPECT_EQ(sol.divide(dividend, divisor), output);
}

TEST(DivideTwoIntegers, Example3)
{
  Solution sol;
  int dividend = 0;
  int divisor = 1;
  int output = 0;

  EXPECT_EQ(sol.divide(dividend, divisor), output);
}

TEST(DivideTwoIntegers, Example4)
{
  Solution sol;
  int dividend = 1;
  int divisor = 1;
  int output = 1;

  EXPECT_EQ(sol.divide(dividend, divisor), output);
}

TEST(DivideTwoIntegers, Example5)
{
  Solution sol;
  int dividend = INT_MIN;
  int divisor = -1;
  int output = INT_MAX;

  EXPECT_EQ(sol.divide(dividend, divisor), output);
}

TEST(DivideTwoIntegers, Example6)
{
  Solution sol;
  int dividend = INT_MIN;
  int divisor = INT_MAX;
  int output = -1;

  EXPECT_EQ(sol.divide(dividend, divisor), output);
}

TEST(DivideTwoIntegers, Example7)
{
  Solution sol;
  int dividend = INT_MIN;
  int divisor = 1;
  int output = INT_MIN;

  EXPECT_EQ(sol.divide(dividend, divisor), output);
}

TEST(DivideTwoIntegers, Example8)
{
  Solution sol;
  int dividend = INT_MAX;
  int divisor = 1;
  int output = INT_MAX;

  EXPECT_EQ(sol.divide(dividend, divisor), output);
}

