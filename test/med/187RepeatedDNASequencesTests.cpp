#include <gtest/gtest.h>
#include "../../../../include/med/187RepeatedDNASequences.hpp"

using namespace RepeatedDNASequences;

TEST(RepeatedDNASequences, Example1)
{
  Solution sol;
  int i = 0;

  EXPECT_EQ(sol.repeateddnasequencesMethod(0), 0);
}

TEST(RepeatedDNASequences, Example2)
{
  Solution sol;
  int i = 5;

  EXPECT_EQ(sol.repeateddnasequencesMethod(1), 1);
}
