#include <gtest/gtest.h>
#include "../../../include/easy/345ReverseVowels.hpp"

using namespace ReverseVowels;

TEST(ReverseVowels, Example1)
{
  Solution sol;
  string s = "hello";
  string exp = "holle";

  string act = sol.reverseVowels(s);

  EXPECT_EQ(act, exp);
}

TEST(ReverseVowels, Example2)
{
  Solution sol;
  string s = "leetcode";
  string exp = "leotcede";

  string act = sol.reverseVowels(s);

  EXPECT_EQ(act, exp);
}
