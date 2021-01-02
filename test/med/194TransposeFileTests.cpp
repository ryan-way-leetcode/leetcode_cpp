#include <gtest/gtest.h>
#include "../../../../include/med/194TransposeFile.hpp"

using namespace TransposeFile;

TEST(TransposeFile, Example1)
{
  Solution sol;
  int i = 0;

  EXPECT_EQ(sol.transposefileMethod(0), 0);
}

TEST(TransposeFile, Example2)
{
  Solution sol;
  int i = 5;

  EXPECT_EQ(sol.transposefileMethod(1), 1);
}
