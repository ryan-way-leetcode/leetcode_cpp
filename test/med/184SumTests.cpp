#include <gtest/gtest.h>
#include "../../../include/med/184Sum.hpp"

using namespace FourSum;

void TwoDSetCompare(vector<vector<int>> act, vector<vector<int>> out)
{
  EXPECT_EQ(act.size(), out.size());

  for(vector<int> a : act)
  {
    sort(a.begin(), a.end());
  }
  sort(act.begin(), act.end());
  
  EXPECT_EQ(act, out);
}

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

  TwoDSetCompare(act, out);
}

TEST(FourSum, Example2)
{
  Solution sol;
  vector<int> nums = {};
  int target = 0;
  vector<vector<int>> out;
  
  vector<vector<int>> act = sol.fourSum(nums, target);

  TwoDSetCompare(act, out);
}

TEST(FourSum, Overflow)
{
  Solution sol;
  vector<int> nums(10, 1000000000);
  int target = 0;
  vector<vector<int>> out;

  vector<vector<int>> act = sol.fourSum(nums, target);

  TwoDSetCompare(act, out);
}

TEST(FourSum, Underflow)
{
  Solution sol;
  vector<int> nums(10, -1000000000);
  int target = 0;
  vector<vector<int>> out;

  vector<vector<int>> act = sol.fourSum(nums, target);

  TwoDSetCompare(act, out);
}

TEST(FourSum, LargeInput)
{
  Solution sol;
  vector<int> nums(200, 10);
  int target = 40;
  vector<vector<int>> out{ { 10, 10, 10, 10 } };

  vector<vector<int>> act = sol.fourSum(nums, target);

  TwoDSetCompare(act, out);

}

TEST(FourSum, Tricky)
{
  Solution sol;
  vector<int> nums(50, 10);
  nums[25] = 9;
  int target = 39;
  vector<vector<int>> out{ { 9, 10, 10, 10 } };

  vector<vector<int>> act = sol.fourSum(nums, target);

  TwoDSetCompare(act, out);

}
