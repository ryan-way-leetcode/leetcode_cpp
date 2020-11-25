#include <gtest/gtest.h>
#include "../../../include/easy/387FirstUniqueCharacterInString.hpp"

using namespace FirstUniqueCharacterInString;

TEST(FirstUniqueCharacterInString, Example1)
{
  Solution sol;
  string s = "leetcode";

  EXPECT_EQ(sol.firstUniqueChar(s), 0);
}

TEST(FirstUniqueCharacterInString, Example2)
{
  Solution sol;
  string s = "loveleetcode";

  EXPECT_EQ(sol.firstUniqueChar(s), 2);
}

TEST(FirstUniqueCharacterInString, MadeUp1)
{
  Solution sol;
  string s = "lelelele";

  EXPECT_EQ(sol.firstUniqueChar(s), -1);
}
