#include <gtest/gtest.h>
#include "../../../../include/med/851LoudAndRich.hpp"

using namespace LoudAndRich;

TEST(LoudAndRich, Example1)
{
  Solution sol;
  vector<vector<int>> richer
  {
    { 1, 0 },
    { 2, 1 },
    { 3, 1 },
    { 3, 7 },
    { 4, 3 },
    { 5, 3 },
    { 6, 3 }
  };
  vector<int> quiet { 3, 2, 5, 4, 6, 1, 7, 0 };
  vector<int> output { 5, 5, 2, 5, 4, 5, 6, 7 };

  EXPECT_EQ(sol.loudAndRich(richer, quiet), output);
}
