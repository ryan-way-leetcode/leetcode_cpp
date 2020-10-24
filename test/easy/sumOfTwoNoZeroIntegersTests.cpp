#include <gtest/gtest.h>
#include "../../../include/easy/sumOfTwoNoZeroIntegers.hpp"

void CheckIfNoZeroInteger(int value)
{
  int j;
  for(j = 10; j <= value; j*=10);
  for(; j > 1; j/=10)
  {
    EXPECT_FALSE((value/(j/10))%10 == 0) 
      << "Expected No-Zero Integer. Got: " << value 
      << ". Failed on: " << j;
  }
}

void ValidateAnswer(vector<int> act, int n)
{
  ASSERT_TRUE(act.size() == 2) << "ExpectedSize: 2, Actual Size:" << act.size();
  EXPECT_EQ(act[0] + act[1], n);
  CheckIfNoZeroInteger(act[0]);
  CheckIfNoZeroInteger(act[1]);
}

TEST(SumOfTwoNoZeroIntegers, Example1)
{
  int n = 2;
  SumOfTwoNoZeroIntegers::Solution s = SumOfTwoNoZeroIntegers::Solution();
  
  ValidateAnswer(s.getNoZeroIntegers(n), n);
}

TEST(SumOfTwoNoZeroIntegers, Example2)
{
  int n = 10000;
  SumOfTwoNoZeroIntegers::Solution s = SumOfTwoNoZeroIntegers::Solution();
  
  ValidateAnswer(s.getNoZeroIntegers(n), n);
}

TEST(SumOfTwoNoZeroIntegers, Example3)
{
  int n = 69;
  SumOfTwoNoZeroIntegers::Solution s = SumOfTwoNoZeroIntegers::Solution();
  
  ValidateAnswer(s.getNoZeroIntegers(n), n);
}

TEST(SumOfTwoNoZeroIntegers, Example4)
{
  int n = 1010;
  SumOfTwoNoZeroIntegers::Solution s = SumOfTwoNoZeroIntegers::Solution();
  
  ValidateAnswer(s.getNoZeroIntegers(n), n);
}

TEST(SumOfTwoNoZeroIntegers, Example5)
{
  int n = 11;
  SumOfTwoNoZeroIntegers::Solution s = SumOfTwoNoZeroIntegers::Solution();
  
  ValidateAnswer(s.getNoZeroIntegers(n), n);
}

TEST(SumofTwoNoZeroIntegers, ALL)
{
  SumOfTwoNoZeroIntegers::Solution s = SumOfTwoNoZeroIntegers::Solution();
  for(int i = 2; i <= 10000; i++)
  {
    ValidateAnswer(s.getNoZeroIntegers(i), i);
  }
}
