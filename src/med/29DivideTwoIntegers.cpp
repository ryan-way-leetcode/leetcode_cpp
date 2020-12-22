#include "../../include/med/29DivideTwoIntegers.hpp"

int DivideTwoIntegers::Solution::divide(int dividend, int divisor)
{
  if(dividend == INT_MIN && divisor == -1)
  {
    return INT_MAX;
  }

  bool negate = (dividend < 0 && divisor > 0) ||
    (dividend > 0 && divisor < 0);

  long ldividend = abs((long)dividend);
  long ldivisor = abs((long)divisor);

  int result = 0;

  long shift = ldivisor;
  int value = 1;

  while(shift < ldividend)
  {
    shift <<= 1;
    value <<= 1;
  }

  while(shift >= ldivisor)
  {
    if(shift <= ldividend)
    {
      result += value;
      ldividend -= shift;
    }

    shift >>= 1;
    value >>= 1;
  }

  return negate? -result : result;
}
