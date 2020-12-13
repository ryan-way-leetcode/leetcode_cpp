#include <gtest/gtest.h>
#include "../../../include/med/184Sum.hpp"

using namespace FourSum;

TEST(FourSum, Example1)
{
  Solution sol;
  vector<int> nums = { 1, 0, -1, 0, -2, 2 };
  int target = 0;
  vector<vector<int>> out = 
  {
    { -2, -1, 1, 2 },
    { -2, 0, 0, 2 },
    { -1, 0, 0, 1 },
  };
  
  vector<vector<int>> act = sol.fourSum(nums, target);

  EXPECT_EQ(act, out);
}

TEST(FourSum, Example2)
{
  Solution sol;
  vector<int> nums = {};
  int target = 0;
  vector<vector<int>> out;
  
  vector<vector<int>> act = sol.fourSum(nums, target);

  EXPECT_EQ(act, out);
}
