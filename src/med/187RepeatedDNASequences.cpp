#include "../../include/med/187RepeatedDNASequences.hpp"

vector<string> RepeatedDNASequences::Solution::findRepeatedDnaSequences(string s)
{
  unordered_map<string, int> map;
  for(int i = 0; i < s.size()-9; i++)
  {
    map[s.substr(i, 10)]++;
  }
  vector<string> unique;
  for(pair<string, int> p : map)
  {
    if(p.second > 1)
    {
      unique.push_back(p.first);
    }
  }
  return unique;
}
