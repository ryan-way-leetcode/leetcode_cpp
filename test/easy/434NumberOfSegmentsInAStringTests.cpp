#include <gtest/gtest.h>
#include "../../../include/easy/434NumberOfSegmentsInAString.hpp"

using namespace NumberOfSegmentsInAString;

TEST(NumberOfSegmentsInAString, Example1)
{
  Solution sol;
  string s = "Hello, my name is John";

  EXPECT_EQ(sol.countSegments(s), 5);
}

TEST(NumberOfSegmentsInAString, Example2)
{
  Solution sol;
  string s = "Hello";

  EXPECT_EQ(sol.countSegments(s), 1);
}

TEST(NumberOfSegmentsInAString, Example3)
{
  Solution sol;
  string s = "love live! mu'sic forever";

  EXPECT_EQ(sol.countSegments(s), 4);
}

TEST(NumberOfSegmentsInAString, Example4)
{
  Solution sol;
  string s = "";

  EXPECT_EQ(sol.countSegments(s), 0);
}
