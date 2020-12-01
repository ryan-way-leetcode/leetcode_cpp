#include "../../include/easy/434NumberOfSegmentsInAString.hpp"

int NumberOfSegmentsInAString::Solution::countSegments(string s)
{
  //set to true if current char is a word character
  bool character = false;
  //count number of characters trailed by a space
  int count = 0;
  for(const char& c : s)
  {
    //if current char is a space and previous character was not, increment
    count += c == ' ' && character;
    //set flag if current character is not a space
    character = c != ' ';
  }
  //covers edge case where the string ends in a word
  count += character;

  return count;
}


