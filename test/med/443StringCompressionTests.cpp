#include <gtest/gtest.h>
#include "../../../../include/med/443StringCompression.hpp"

using namespace StringCompression;

TEST(StringCompression, Example1)
{
  Solution sol;
  vector<char> chars = { 'a','a','b','b','c','c','c'};
  int output = 6;
  vector<char> chars_out = { 'a','2','b','2','c','3' };

  EXPECT_EQ(sol.compress(chars), output);
  for(int i = 0; i < chars_out.size(); i++)
  {
    EXPECT_EQ(chars_out[i], chars[i]);
  }
}

TEST(StringCompression, Example2)
{
  Solution sol;
  vector<char> chars = {'a'};
  int output = 1;
  vector<char> chars_out = {'a'};

  EXPECT_EQ(sol.compress(chars), output);
  for(int i = 0; i < chars_out.size(); i++)
  {
    EXPECT_EQ(chars_out[i], chars[i]);
  }
}

TEST(StringCompression, Example3)
{
  Solution sol;
  vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
  int output = 4;
  vector<char> chars_out = {'a','b','1','2'};

  EXPECT_EQ(sol.compress(chars), output);
  for(int i = 0; i < chars_out.size(); i++)
  {
    EXPECT_EQ(chars_out[i], chars[i]);
  }
}

TEST(StringCompression, Example4)
{
  Solution sol;
  vector<char> chars = {'a','a','a','b','b','a','a'};
  int output = 6;
  vector<char> chars_out = {'a','3','b','2','a','2'};

  EXPECT_EQ(sol.compress(chars), output);
  for(int i = 0; i < chars_out.size(); i++)
  {
    EXPECT_EQ(chars_out[i], chars[i]);
  }
}

TEST(StringCompression, Example5)
{
  Solution sol;
  vector<char> chars(2000, 'a');
  int output = 5;
  vector<char> chars_out = {'a', '2', '0', '0', '0'};

  EXPECT_EQ(sol.compress(chars), output);
  for(int i = 0; i < chars_out.size(); i++)
  {
    EXPECT_EQ(chars_out[i], chars[i]);
  }
}

TEST(StringCompression, Example6)
{
  Solution sol;
  vector<char> chars = { 'a', 'b', 'c', 'd', 'e', 'f' };
  int output = 6;
  vector<char> chars_out = {'a', 'b', 'c', 'd', 'e', 'f' };

  EXPECT_EQ(sol.compress(chars), output);
  for(int i = 0; i < chars_out.size(); i++)
  {
    EXPECT_EQ(chars_out[i], chars[i]);
  }
}
