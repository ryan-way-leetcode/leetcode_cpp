#include <gtest/gtest.h>
#include "../../include/template.hpp"

using namespace Template;

TEST(Template, Example1)
{
  Solution sol;
  int i = 0;

  EXPECT_EQ(sol.templateMethod(0), 0);
}

TEST(Template, Example2)
{
  Solution sol;
  int i = 5;

  EXPECT_EQ(sol.templateMethod(1), 1);
}
