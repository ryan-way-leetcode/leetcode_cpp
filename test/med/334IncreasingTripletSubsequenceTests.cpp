#include <gtest/gtest.h>
#include "../../../../include/med/334IncreasingTripletSubsequence.hpp"

using namespace IncreasingTripletSubsequence;

TEST(IncreasingTripletSubsequence, Example1)
{
  Solution sol;
  vector<int> nums { 1, 2, 3, 4, 5 };
  
  EXPECT_TRUE(sol.increasingTriplet(nums));
}

TEST(IncreasingTripletSubsequence, Example2)
{
  Solution sol;
  vector<int> nums { 5, 4, 3, 2, 1};
  
  EXPECT_FALSE(sol.increasingTriplet(nums));
}

TEST(IncreasingTripletSubsequence, Example3)
{
  Solution sol;
  vector<int> nums { 2, 1, 5, 0, 4, 6 };
  
  EXPECT_TRUE(sol.increasingTriplet(nums));
}

TEST(IncreasingTripletSubsequence, Example4)
{
  Solution sol;
  vector<int> nums { 1, 4, 3, 2, 5 };
  
  EXPECT_TRUE(sol.increasingTriplet(nums));
}

TEST(IncreasingTripletSubsequence, Example5)
{
  Solution sol;
  vector<int> nums { 20, 100, 10, 12, 5, 13 };
  
  EXPECT_TRUE(sol.increasingTriplet(nums));
}
