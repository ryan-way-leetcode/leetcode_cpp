#include <gtest/gtest.h>
#include "../../../../include/med/54SprialMatrix.hpp"

using namespace SprialMatrix;

TEST(SprialMatrix, Example1)
{
  Solution sol;
  vector<vector<int>> matrix
  {
    { 1, 2, 3 },
    { 4, 5, 6 },
    { 7, 8, 9 }
  };
  vector<int> out{ 1, 2, 3, 6, 9, 8, 7, 4, 5 };

  EXPECT_EQ(sol.spiralOrder(matrix), out);
}

TEST(SprialMatrix, Example2)
{
  Solution sol;
  vector<vector<int>> matrix
  {
    { 1, 2, 3, 4 },
    { 5, 6, 7, 8 },
    { 9, 10, 11, 12 }
  };
  vector<int> out{ 1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7 };

  EXPECT_EQ(sol.spiralOrder(matrix), out);
}

TEST(SprialMatrix, Example3)
{
  Solution sol;
  vector<vector<int>> matrix
  {
    { 1, 2, 3, 4 },
  };
  vector<int> out{ 1, 2, 3, 4 };

  EXPECT_EQ(sol.spiralOrder(matrix), out);
}

TEST(SprialMatrix, Example4)
{
  Solution sol;
  vector<vector<int>> matrix
  {
    {1}, {2}, {3}, {4},
  };
  vector<int> out{ 1, 2, 3, 4 };

  EXPECT_EQ(sol.spiralOrder(matrix), out);
}

TEST(SprialMatrix, Example5)
{
  Solution sol;
  vector<vector<int>> matrix
  {
    {1}
  };
  vector<int> out{ 1 };

  EXPECT_EQ(sol.spiralOrder(matrix), out);
}

TEST(SprialMatrix, Example6)
{
  Solution sol;
  vector<vector<int>> matrix
  {
    { -12, -11, -10, -9 },
    { -8, -7, -6, 0 },
    { -4, -3, -2, -1 }
  };
  vector<int> out{ -12, -11, -10, -9, 0, -1, -2, -3, -4, -8, -7, -6 };

  EXPECT_EQ(sol.spiralOrder(matrix), out);
}
