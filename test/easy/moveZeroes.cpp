#include <gtest/gtest.h>
#include "../../../include/easy/moveZeroes.hpp"

TEST(MoveZeroes, Example1)
{
  std::vector<int> in{ 0, 1, 0, 3, 12 };
  std::vector<int> exp{ 1, 3, 12, 0, 0 };

  MoveZeroes::Solution sol = MoveZeroes::Solution();

  //in place
  sol.moveZeroes(in);
  EXPECT_EQ(exp, in);
}  

TEST(MoveZeroes, NoWork)
{
  std::vector<int> in{ 1, 3, 12, 0, 0 };
  std::vector<int> exp{ 1, 3, 12, 0, 0 };

  MoveZeroes::Solution sol = MoveZeroes::Solution();

  //in place
  sol.moveZeroes(in);
  EXPECT_EQ(exp, in);
}  
