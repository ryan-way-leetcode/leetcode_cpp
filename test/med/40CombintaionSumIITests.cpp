#include <gtest/gtest.h>
#include <algorithm>
#include "../../../../include/med/40CombintaionSumII.hpp"

using namespace CombintaionSumII;

void CompareSolutionSets(vector<vector<int>> act, vector<vector<int>> exp)
{
  ASSERT_EQ(act.size(), exp.size());
  for(vector<int> v : act)
  {
    sort(v.begin(), v.end());
  }
  for(vector<int> v : exp)
  {
    sort(v.begin(), v.end());
  }
  sort(act.begin(), act.end());
  sort(exp.begin(), exp.end());

  EXPECT_EQ(act, exp);
}

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


  CompareSolutionSets(sol.combinationSum2(candidates, target), out);
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

  CompareSolutionSets(sol.combinationSum2(candidates, target), out);
}

TEST(CombintaionSumII, Example3)
{
  Solution sol;
  vector<int> candidates{ 4, 5, 3, 2, 3, 3, 5, 5 };
  int target = 9;

  vector<vector<int>> out = 
  {
    { 2, 3, 4 },
    { 3, 3, 3 },
    { 4, 5 }
  };

  CompareSolutionSets(sol.combinationSum2(candidates, target), out);
}
