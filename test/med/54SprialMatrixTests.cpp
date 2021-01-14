#include <gtest/gtest.h>
#include "../../../../include/med/54SprialMatrix.hpp"

using namespace SprialMatrix;

TEST(SprialMatrix, Example1)
{
  Solution sol;
  int i = 0;

  EXPECT_EQ(sol.sprialmatrixMethod(0), 0);
}

TEST(SprialMatrix, Example2)
{
  Solution sol;
  int i = 5;

  EXPECT_EQ(sol.sprialmatrixMethod(1), 1);
}
