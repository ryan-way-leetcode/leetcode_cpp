#include <gtest/gtest.h>
#include "../../../../include/med/334IncreasingTripletSubsequence.hpp"

using namespace IncreasingTripletSubsequence;

TEST(IncreasingTripletSubsequence, Example1)
{
  Solution sol;
  int i = 0;

  EXPECT_EQ(sol.increasingtripletsubsequenceMethod(0), 0);
}

TEST(IncreasingTripletSubsequence, Example2)
{
  Solution sol;
  int i = 5;

  EXPECT_EQ(sol.increasingtripletsubsequenceMethod(1), 1);
}
