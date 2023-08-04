#include <gtest/gtest.h>
#include "../../../../include/med/5LongestPalindromicSubstring.hpp"

using namespace LongestPalindromicSubstring;

TEST(LongestPalindromicSubstring, Example1)
{
  Solution sol;
  string s = "babad";
  string out = "bab";

  EXPECT_EQ(sol.longestPalindrome(s), out);
}

TEST(LongestPalindromicSubstring, Example2)
{
  Solution sol;
  string s = "cbbd";
  string out = "bb";

  EXPECT_EQ(sol.longestPalindrome(s), out);
}

TEST(LongestPalindromicSubstring, Example3)
{
  Solution sol;
  string s = "a";
  string out = "a";

  EXPECT_EQ(sol.longestPalindrome(s), out);
}

TEST(LongestPalindromicSubstring, Example4)
{
  Solution sol;
  string s = "ac";
  string out = "a";

  EXPECT_EQ(sol.longestPalindrome(s), out);
}

TEST(LongestPalindromicSubstring, Example5)
{
  Solution sol;
  string s = "abb";
  string out = "bb";

  EXPECT_EQ(sol.longestPalindrome(s), out);
}

TEST(LongestPalindromicSubstring, Example6)
{
  Solution sol;
  string s = "aacabdkacaa";
  string out = "aca";

  EXPECT_EQ(sol.longestPalindrome(s), out);
}
