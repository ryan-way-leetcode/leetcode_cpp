#ifndef NUMBEROFBOOMERANGS
#define NUMBEROFBOOMERANGS

#include <vector>
#include <map>
#include <math.h>

using namespace std;

namespace NumberOfBoomerangs {
  
  class Solution {
    public:
      int numberOfBoomerangs(vector<vector<int>>& points);
      int numberOfBoomerangs_Old(vector<vector<int>>& points);
    private:
      double distance(vector<int>, vector<int>);
  };

}
#endif
