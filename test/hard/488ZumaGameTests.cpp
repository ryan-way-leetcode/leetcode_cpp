#include <gtest/gtest.h>
#include "../../../../include/hard/488ZumaGame.hpp"

using namespace ZumaGame;

TEST(ZumaGame, Example1)
{
  Solution sol;
  int i = 0;

  EXPECT_EQ(sol.zumagameMethod(0), 0);
}

TEST(ZumaGame, Example2)
{
  Solution sol;
  int i = 5;

  EXPECT_EQ(sol.zumagameMethod(1), 1);
}
