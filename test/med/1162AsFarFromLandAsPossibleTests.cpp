#include <gtest/gtest.h>
#include "../../../include/med/1162AsFarFromLandAsPossible.hpp"

using namespace AsFarFromLandAsPossible;

TEST(AsFarFromLandAsPossible, Example1)
{
  Solution sol;
  vector<vector<int>> grid = {
    { 1, 0, 1 },
    { 0, 0, 0 },
    { 1, 0, 1 }
  };

  EXPECT_EQ(sol.maxDistance(grid), 2);
}

TEST(AsFarFromLandAsPossible, Example2)
{
  Solution sol;
  vector<vector<int>> grid = {    
    { 1, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 }
  };

  EXPECT_EQ(sol.maxDistance(grid), 4);
}
