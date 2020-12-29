#include <gtest/gtest.h>
#include "../../../../include/med/150EvaluateReversePolishNotation.hpp"

using namespace EvaluateReversePolishNotation;

TEST(EvaluateReversePolishNotation, Example1)
{
  Solution sol;
  vector<string> input
  {
    "2", "1", "+", "3", "*"
  };
  int output = 9;

  EXPECT_EQ(sol.evalRPN(input), output);
}

TEST(EvaluateReversePolishNotation, Example2)
{
  Solution sol;
  vector<string> input
  {
    "4", "13", "5", "/", "+"
  };
  int output = 6;

  EXPECT_EQ(sol.evalRPN(input), output);
}

TEST(EvaluateReversePolishNotation, Example3)
{
  Solution sol;
  vector<string> input
  {
    "10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"
  };
  int output = 22;

  EXPECT_EQ(sol.evalRPN(input), output);
}
