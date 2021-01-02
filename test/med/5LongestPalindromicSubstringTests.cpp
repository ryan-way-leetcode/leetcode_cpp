#include <gtest/gtest.h>
#include "../../../../include/med/5LongestPalindromicSubstring.hpp"

using namespace LongestPalindromicSubstring;

TEST(LongestPalindromicSubstring, Example1)
{
  Solution sol;
  int i = 0;

  EXPECT_EQ(sol.longestpalindromicsubstringMethod(0), 0);
}

TEST(LongestPalindromicSubstring, Example2)
{
  Solution sol;
  int i = 5;

  EXPECT_EQ(sol.longestpalindromicsubstringMethod(1), 1);
}
