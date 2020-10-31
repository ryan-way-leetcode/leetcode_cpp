#include <gtest/gtest.h>
#include "../../../include/easy/228summaryranges.hpp"


TEST(SummaryRanges, Example1)
{
  vector<int> nums = { 0, 1, 2, 4, 5, 7 };
  vector<string> out = { "0->2", "4->5", "7" };
  SummaryRanges::Solution s = SummaryRanges::Solution();

  EXPECT_EQ(s.summaryRanges(nums), out);
}

TEST(SummaryRanges, Example2)
{
  vector<int> nums = { 0, 2, 3, 4, 6, 8, 9 };
  vector<string> out = { "0", "2->4", "6", "8->9" };
  SummaryRanges::Solution s = SummaryRanges::Solution();

  EXPECT_EQ(s.summaryRanges(nums), out);
}

TEST(SummaryRanges, Example3)
{
  vector<int> nums = {};
  vector<string> out = {};
  SummaryRanges::Solution s = SummaryRanges::Solution();

  EXPECT_EQ(s.summaryRanges(nums), out);
}

TEST(SummaryRanges, Example4)
{
  vector<int> nums = { -1 };
  vector<string> out = { "-1" };
  SummaryRanges::Solution s = SummaryRanges::Solution();

  EXPECT_EQ(s.summaryRanges(nums), out);
}

TEST(SummaryRanges, Example5)
{
  vector<int> nums = { 0 };
  vector<string> out = { "0" };
  SummaryRanges::Solution s = SummaryRanges::Solution();

  EXPECT_EQ(s.summaryRanges(nums), out);
}
