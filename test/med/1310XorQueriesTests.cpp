#include <gtest/gtest.h>
#include "../../../../include/med/1310XorQueries.hpp"

using namespace XorQueries;

TEST(XorQueries, Example1)
{
  Solution sol;
  vector<int> arr{ 1, 3, 4, 8 };
  vector<vector<int>> queries
  {
    { 0, 1 },
    { 1, 2 },
    { 0, 3 },
    { 3, 3 }
  };
  vector<int> out{ 2, 7, 14, 8 };

  EXPECT_EQ(sol.xorQueries(arr, queries), out);
}

TEST(XorQueries, Example2)
{
  Solution sol;
  vector<int> arr{ 4, 8, 2, 10 };
  vector<vector<int>> queries
  {
    { 2, 3 },
    { 1, 3 },
    { 0, 0 },
    { 0, 3 }
  };
  vector<int> out{ 8, 0, 4, 4 };

  EXPECT_EQ(sol.xorQueries(arr, queries), out);
}
