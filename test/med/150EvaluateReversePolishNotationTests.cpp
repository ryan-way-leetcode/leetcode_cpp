#include <gtest/gtest.h>
#include "../../../../include/med/150EvaluateReversePolishNotation.hpp"

using namespace EvaluateReversePolishNotation;

TEST(EvaluateReversePolishNotation, Example1)
{
  Solution sol;
  int i = 0;

  EXPECT_EQ(sol.evaluatereversepolishnotationMethod(0), 0);
}

TEST(EvaluateReversePolishNotation, Example2)
{
  Solution sol;
  int i = 5;

  EXPECT_EQ(sol.evaluatereversepolishnotationMethod(1), 1);
}
