#include <gtest/gtest.h>
#include "../../../include/easy/sumOfTwoNoZeroIntegers.hpp"

TEST(SumOfTwoNoZeroIntegers, Example1)
{
  int n = 2;
  SumOfTwoNoZeroIntegers::Solution s = SumOfTwoNoZeroIntegers::Solution();
  
  vector<int> act = s.getNoZeroIntegers(n);

  ASSERT_TRUE(act.size() == 2);
  EXPECT_EQ(act[0] + act[1], n);

  for(int i = 0; i < act.size(); i++)
  {
    for(int j = 1; j <= act[i]*10; j*=10)
    {
      EXPECT_FALSE((act[i]/j)%10 != 0);
    }
  }
}

TEST(SumOfTwoNoZeroIntegers, Example2)
{
}

TEST(SumOfTwoNoZeroIntegers, Example3)
{
}

TEST(SumOfTwoNoZeroIntegers, Example4)
{
}

TEST(SumOfTwoNoZeroIntegers, Example5)
{
}
