#include <gtest/gtest.h>
#include "../../../include/med/456132Pattern.hpp"

using namespace D132Pattern;

TEST(D132Pattern, Example1)
{
  Solution sol;
  vector<int> nums = { 1, 2, 3, 4 };

  EXPECT_FALSE(sol.find132pattern(nums));
}

TEST(D132Pattern, Example2)
{
  Solution sol;
  vector<int> nums = { 3, 1, 4, 2 };

  EXPECT_TRUE(sol.find132pattern(nums));
}

TEST(D132Pattern, Example3)
{
  Solution sol;
  vector<int> nums = { -1, 3, 2, 0 };

  EXPECT_TRUE(sol.find132pattern(nums));
}
