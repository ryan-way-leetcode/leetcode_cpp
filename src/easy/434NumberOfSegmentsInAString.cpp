#include "../../include/easy/434NumberOfSegmentsInAString.hpp"

int NumberOfSegmentsInAString::Solution::countSegments(string s)
{
  if (!any_of(s.begin(), s.end(), [](const char& c) { return c != ' '; }))
  {
    return 0;
  }
  
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


