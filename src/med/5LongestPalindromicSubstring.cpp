#include "../../include/med/5LongestPalindromicSubstring.hpp"

string longestPalindromeDP(string s)
{
  vector<vector<int>> a(s.size(), vector<int>(s.size(), 0));

  for(int i = 0; i < s.size(); i++)
  {
    a[i][i] = 1;
  }

  for(int i = 0; i < s.size()-1; i++)
  {
    a[i][i+1] = s[i] == s[i+1];
  }

  for(int i = 2; i < s.size(); i++)
  {
    for(int j = 0; j+i < s.size(); j++)
    {
      a[j][i+j] = a[j+1][i+j-1] && s[i+j] == s[j];
    }
  }

  int big = 0, i_max = 0, j_max = 0;
  for(int i = 0; i < a.size(); i++)
  {
    for(int j = 0; j < a[i].size(); j++)
    {
      if(a[i][j] && (j-i+1) > big)
      {
        big = j-i+1;
        i_max = i;
        j_max = j;
      }
    }
  }

  return s.substr(i_max, big);
}

string longestPalindromeExpand(string s)
{

  int big = 0, start_max = 0, end_max = 0;
  for(int i = 0; i < s.size(); i++)
  {
    int start = i, end = i;
    while(start >= 0 && end < s.size() && s[end] == s[start])
    {
      if(end-start+1 > big)
      {
        big = end-start+1;
        start_max = start;
        end_max = end;
      }
      start--;
      end++;
    }
    if(i > 0 && s[i] == s[i-1])
    {
      start = i-1, end = i;
      while(start >= 0 && end < s.size() && s[end] == s[start])
      {
        if(end-start+1 > big)
        {
          big = end-start+1;
          start_max = start;
          end_max = end;
        }
        start--;
        end++;
      }
    }
  }
  return s.substr(start_max, big);
}

string LongestPalindromicSubstring::Solution::longestPalindrome(string s)
{
  return longestPalindromeExpand(s);
}

