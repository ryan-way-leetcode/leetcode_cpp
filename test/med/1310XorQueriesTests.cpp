#include <gtest/gtest.h>
#include "../../../../include/med/1310XorQueries.hpp"

using namespace XorQueries;

TEST(XorQueries, Example1)
{
  Solution sol;
  int i = 0;

  EXPECT_EQ(sol.xorqueriesMethod(0), 0);
}

TEST(XorQueries, Example2)
{
  Solution sol;
  int i = 5;

  EXPECT_EQ(sol.xorqueriesMethod(1), 1);
}
