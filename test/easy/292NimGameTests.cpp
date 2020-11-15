#include <gtest/gtest.h>
#include "../../../include/easy/292NimGame.hpp"

using namespace NimGame;

TEST(NimGame, Example1)
{
  Solution s;
  int n = 4;

  EXPECT_FALSE(s.canWinNim(n));
}

TEST(NimGame, Example2)
{
  Solution s;
  int n = 1;

  EXPECT_TRUE(s.canWinNim(n));
}

TEST(NimGame, Example3)
{
  Solution s;
  int n = 2;

  EXPECT_TRUE(s.canWinNim(n));
}
