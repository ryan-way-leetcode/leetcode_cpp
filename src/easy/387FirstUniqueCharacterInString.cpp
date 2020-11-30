#include "../../include/easy/387FirstUniqueCharacterInString.hpp"

int FirstUniqueCharacterInString::Solution::firstUniqueChar(string s)
{
  unordered_map<char, int> map; 
  for(const char &c :  s)
  {
    map[c]++;
  }

  for(int i = 0; i < s.size(); i++)
  {
    if(map[s[i]] == 1)
    {
      return i;
    }
  }
  return -1;
}


