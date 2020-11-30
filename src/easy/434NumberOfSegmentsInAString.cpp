#include "../../include/easy/434NumberOfSegmentsInAString.hpp"

int NumberOfSegmentsInAString::Solution::countSegments(string s)
{
  bool character = false;
  int count = 0;
  for(const char& c : s)
  {
    if(c == ' ' && character)
    {
      count++;
      character = false;
    }
    else if(c != ' ')
    {
      character = true;
    }
  }
  count += character;

  return count;
}


