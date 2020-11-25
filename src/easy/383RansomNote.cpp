#include "../../include/easy/383RansomNote.hpp"

bool RansomNote::Solution::canConstruct(string ransomNote, string magazine)
{
  map<char, int> m_ransom, m_magazine;

  for_each(ransomNote.begin(), ransomNote.end(), [&m_ransom](const char &c)
      { m_ransom.insert(make_pair(c, 0)); });
  for_each(magazine.begin(), magazine.end(), [&m_magazine](const char &c)
      { m_magazine.insert(make_pair(c, 0)); });

  for_each(ransomNote.begin(), ransomNote.end(), [&m_ransom](const char &c)
      { m_ransom[c]++; });
  for_each(magazine.begin(), magazine.end(), [&m_magazine](const char &c)
      { m_magazine[c]++; });

  return all_of(m_ransom.begin(), m_ransom.end(), 
      [&m_magazine](const pair<char, int> p) 
      { return m_magazine[p.first] > 0 && m_magazine[p.first] >= p.second; });
}
