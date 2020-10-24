#include "../../include/easy/sumOfTwoNoZeroIntegers.hpp"

bool SumOfTwoNoZeroIntegers::Solution::CheckIfNoZeroInteger(int value)
{
  int j;
  for(j = 10; j <= value; j*=10);
  for(; j > 1; j /= 10)
  {
    if((value/(j/10))%10 == 0)
    {
      return false;
    }
  }

  return true;
}

vector<int> SumOfTwoNoZeroIntegers::Solution::getNoZeroIntegers(int n)
{   
  vector<int> ret = { 0, n };
  while(ret[1] != 0)
  {
    if(this->CheckIfNoZeroInteger(ret[0]) && this->CheckIfNoZeroInteger(ret[1]))
    {
      return ret;
    }
    else
    {
      ret[0]++;
      ret[1]--;
    }
  }
  return ret;
}
