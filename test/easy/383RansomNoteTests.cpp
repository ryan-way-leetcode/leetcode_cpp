#include <gtest/gtest.h>
#include "../../../include/easy/383RansomNote.hpp"

using namespace RansomNote;

TEST(RansomNote, Example1)
{
  Solution s;
  string ransomNote = "a";
  string magazine = "b";

  EXPECT_FALSE(s.canConstruct(ransomNote, magazine));
}

TEST(RansomNote, Example2)
{
  Solution s;
  string ransomNote = "aa";
  string magazine = "ab";

  EXPECT_FALSE(s.canConstruct(ransomNote, magazine));
}

TEST(RansomNote, Example3)
{
  Solution s;
  string ransomNote = "aa";
  string magazine = "aab";

  EXPECT_TRUE(s.canConstruct(ransomNote, magazine));
}
