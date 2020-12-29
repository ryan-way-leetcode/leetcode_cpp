#include "../../include/med/8StringToInteger.hpp"

int StringToInteger::Solution::myAtoi(string s)
{
  long num = 0;
  bool negate = false;
  string state = "find";
  for(const char c : s)
  {
    if(state == "find")
    {
      if(c == '+' || c == '-')
      {
        state = "num";
        negate = c == '-';
      }
      else if(c <= '9' && c >= '0')
      {
        state = "num";
        num += c - '0';
      }
      else if(c != ' ')
      {
        break;
      }
    }
    else if(state == "num")
    {
      if(c <= '9' && c >= '0')
      {
        num *= 10;
        num += c - '0';
        if(!negate && num > INT_MAX)
        {
          return INT_MAX;
        }
        else if(negate && -num < INT_MIN)
        {
          return INT_MIN;
        }
      }
      else
      {
        break;
      }
    }
    //don't do anything for spaces in state find
  }
  num *= negate ? -1 : 1;
  return (int)num;
}
