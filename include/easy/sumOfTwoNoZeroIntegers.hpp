#ifndef SUMOFTWONOZEROINTEGERS
#define SUMOFTWONOZEROINTEGERS

#include <vector>

using namespace std;

namespace SumOfTwoNoZeroIntegers {
  
  class Solution {
    public:
      vector<int> getNoZeroIntegers(int n);

    private:
      bool CheckIfNoZeroInteger(int value);
  };

}
#endif
