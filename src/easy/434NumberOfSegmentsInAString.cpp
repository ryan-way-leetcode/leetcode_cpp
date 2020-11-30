#include "../../include/easy/434NumberOfSegmentsInAString.hpp"

int NumberOfSegmentsInAString::Solution::countSegments(string s)
{
  bool character = false;
  int count = 0;
  for(const char& c : s)
  {
    count += c == ' ' && character;
    character = c != ' ';
  }
  count += character;

  return count;
}


