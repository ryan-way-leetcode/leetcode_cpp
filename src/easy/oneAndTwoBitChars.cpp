/**
 * Definition for a binary tree node.
 */
#include "../../include/easy/oneAndTwoBitChars.hpp"
#include <iostream>

bool OneAndTwoBitChars::Solution::isOneBitCharacter(vector<int>& bits)
{
  for(int i = bits.size()-2; i > -1; i--)
  {
    if(bits[i] == 0)
    {
      int numOnes = bits.size() - i;
      return numOnes % 2 == 0;
    }
  }
  return (bits.size()-1) % 2 == 0;
}