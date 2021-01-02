#include <gtest/gtest.h>
#include "../../../../include/med/851LoudAndRich.hpp"

using namespace LoudAndRich;

TEST(LoudAndRich, Example1)
{
  Solution sol;
  int i = 0;

  EXPECT_EQ(sol.loudandrichMethod(0), 0);
}

TEST(LoudAndRich, Example2)
{
  Solution sol;
  int i = 5;

  EXPECT_EQ(sol.loudandrichMethod(1), 1);
}
