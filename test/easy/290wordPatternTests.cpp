#include <gtest/gtest.h>
#include "../../../include/easy/290wordPattern.hpp"


TEST(WordPattern, Example1)
{
  WordPattern::Solution sol = WordPattern::Solution();
  string pattern = "abba", s = "dog cat cat dog";

  EXPECT_TRUE(sol.wordPattern(pattern, s));
}

TEST(WordPattern, Example2)
{
  WordPattern::Solution sol = WordPattern::Solution();
  string pattern = "abba", s = "dog cat cat fish";

  EXPECT_FALSE(sol.wordPattern(pattern, s));
}

TEST(WordPattern, Example3)
{
  WordPattern::Solution sol = WordPattern::Solution();
  string pattern = "aaaa", s = "dog cat cat dog";

  EXPECT_FALSE(sol.wordPattern(pattern, s));
}

TEST(WordPattern, Example4)
{
  WordPattern::Solution sol = WordPattern::Solution();
  string pattern = "abba", s = "dog dog dog dog";

  EXPECT_FALSE(sol.wordPattern(pattern, s));
}

TEST(WordPattern, Example5)
{
  WordPattern::Solution sol = WordPattern::Solution();
  string pattern = "aba", s = "cat cat cat dog";

  EXPECT_FALSE(sol.wordPattern(pattern, s));
}

TEST(WordPattern, Example6)
{
  WordPattern::Solution sol = WordPattern::Solution();
  string pattern = "aba", s = "dog cat cat";

  EXPECT_FALSE(sol.wordPattern(pattern, s));
}
