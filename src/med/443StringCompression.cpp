#include "../../include/med/443StringCompression.hpp"

int StringCompression::Solution::compress(vector<char>& chars)
{
  int count = 1;
  int j = 0;
  for(int i = 1; i < chars.size(); i++)
  {
    if(chars[i] == chars[i-1])
    {
      count++;
    }
    else
    {
      j++;
      if(count >= 1000)
      {
        chars[j++] = (count/1000)+'0';
      }
      if(count >= 100)
      {
        chars[j++] = ((count/100)%10)+'0';
      }
      if(count >= 10)
      {
        chars[j++] = ((count/10)%10)+'0';
      }
      if(count > 1)
      {
        chars[j++] = ((count)%10) + '0';
      }
      chars[j] = chars[i];
      count = 1;
    }
  }
  j++;
  if(count >= 1000)
  {
    chars[j++] = (count/1000)+'0';
  }
  if(count >= 100)
  {
    chars[j++] = ((count/100)%10)+'0';
  }
  if(count >= 10)
  {
    chars[j++] = ((count/10)%10)+'0';
  }
  if(count > 1)
  {
    chars[j++] = ((count)%10) + '0';
  }

  return j;
}
