#include <gtest/gtest.h>
#include "../../../include/easy/344ReverseString.hpp"

using namespace ReverseString;

TEST(ReverseString, Example1)
{
  Solution sol;
  vector<char> s = { 'h', 'e', 'l', 'l', 'o' };
  vector<char> out = { 'o', 'l', 'l', 'e', 'h' };

  sol.reverseString(s);

  EXPECT_EQ(s, out);
}

TEST(ReverseString, Example2)
{
  Solution sol;
  vector<char> s = { 'H', 'a', 'n', 'n', 'a', 'h' };
  vector<char> out = { 'h', 'a', 'n', 'n', 'a', 'H' };

  sol.reverseString(s);

  EXPECT_EQ(s, out);
}
