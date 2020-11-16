#include "../../include/easy/345ReverseVowels.hpp"

string ReverseVowels::Solution::reverseVowels(string s)
{
  string ret(s);
  string::reverse_iterator back = s.rbegin();
  
  for(string::iterator forward = ret.begin(); forward != ret.end(); forward++)
  {
    if(*forward == 'a' || *forward == 'e' || *forward == 'i' || *forward == 'o'
        || *forward == 'u' || *forward == 'A' || *forward == 'E' 
        || *forward == 'I' || *forward == 'O' || *forward == 'U' )
    {
      while(*back != 'a' && *back != 'e' && *back != 'i' && *back != 'o'
        && *back != 'u' && *back != 'A' && *back != 'E' 
        && *back != 'I' && *back != 'O' && *back != 'U' )
        back++;
      *forward = *back;
      back++;
    }
  }
  return ret;
}


