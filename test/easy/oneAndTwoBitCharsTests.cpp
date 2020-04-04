#include <gtest/gtest.h>
#include "../../../include/easy/oneAndTwoBitChars.hpp"

TEST(OneAndTwoBitCharsTests, ListOfLengthOne)
{
  vector<int> in{ 0 };

  bool exp = true;
  OneAndTwoBitChars::Solution sol = OneAndTwoBitChars::Solution();

  bool act = sol.isOneBitCharacter(in);
  EXPECT_EQ(exp, act);
}

TEST(OneAndTwoBitCharsTests, Example1)
{
  vector<int> in{ 1, 0, 0 };

  bool exp = true;
  OneAndTwoBitChars::Solution sol = OneAndTwoBitChars::Solution();

  bool act = sol.isOneBitCharacter(in);
  EXPECT_EQ(exp, act);
}

TEST(OneAndTwoBitCharsTests, Example2)
{
  vector<int> in{ 1, 1, 1, 0 };
  
  bool exp = false;
  OneAndTwoBitChars::Solution sol = OneAndTwoBitChars::Solution();

  bool act = sol.isOneBitCharacter(in);
  EXPECT_EQ(exp, act);
}