#include "../../include/easy/350IntersectionofTwoArraysII.hpp"

vector<int> IntersectionofTwoArraysII::Solution::intersect(
    vector<int>& nums1,
    vector<int>& nums2)
{
  unordered_map<int, int> m_nums1;
  unordered_map<int, int> m_nums2;

  for(int i : nums1)
  {
    if(m_nums1.count(i) == 0)
      m_nums1.insert(make_pair<int&, int>(i, 0));

    m_nums1[i]++;
  }

  for(int i : nums2)
  {
    if(m_nums2.count(i) == 0)
      m_nums2.insert(make_pair<int&, int>(i, 0));

    m_nums2[i]++;
  }

  unordered_map<int, int> m_result;

  for(pair<int, int> p : m_nums2)
  {
    if(m_nums1.count(p.first))
    {
      m_result.insert(make_pair<int&, int const&>(p.first,
           min(m_nums1[p.first], m_nums2[p.first])));
    }
  }

  int sum = 0;
  for(pair<int, int> p : m_result)
  {
    sum += p.second;
  }

  vector<int> result(sum);
  int place = 0;
  for(pair<int, int> p : m_result)
  {
    for(int i = 0; i < p.second; i++)
    {
      result[place++] = p.first;
    }
  }


  return result;
}


