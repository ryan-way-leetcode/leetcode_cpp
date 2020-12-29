#include <gtest/gtest.h>
#include "../../../../include/med/443StringCompression.hpp"

using namespace StringCompression;

TEST(StringCompression, Example1)
{
  Solution sol;
  int i = 0;

  EXPECT_EQ(sol.stringcompressionMethod(0), 0);
}

TEST(StringCompression, Example2)
{
  Solution sol;
  int i = 5;

  EXPECT_EQ(sol.stringcompressionMethod(1), 1);
}
