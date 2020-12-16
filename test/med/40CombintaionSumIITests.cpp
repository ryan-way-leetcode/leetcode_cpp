#include <gtest/gtest.h>
#include "../../../../include/med/40CombintaionSumII.hpp"

using namespace CombintaionSumII;

TEST(CombintaionSumII, Example1)
{
  Solution sol;
  vector<int> candidates{ 10, 1, 2, 7, 6, 1, 5 };
  int target = 8;

  vector<vector<int>> out = 
  {
    { 1, 1, 6 },
    { 1, 2, 5 },
    { 1, 7 },
    { 2, 6 }
  };


  EXPECT_EQ(sol.combinationSum2(candidates, target), out);
}

TEST(CombintaionSumII, Example2)
{
  Solution sol;
  vector<int> candidates{ 2, 5, 2, 1, 2 };
  int target = 5;

  vector<vector<int>> out = 
  {
    { 1, 2, 2 },
    { 5 }
  };

  EXPECT_EQ(sol.combinationSum2(candidates, target), out);
}
