#ifndef NUMBEROFBOOMERANGS
#define NUMBEROFBOOMERANGS

#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

namespace NumberOfBoomerangs {
  
  class Solution {
    public:
      int numberOfBoomerangs(vector<vector<int>>& points);
      int numberOfBoomerangs_O2_Fast(vector<vector<int>>& points);
      int numberOfBoomerangs_O2(vector<vector<int>>& points);
      int numberOfBoomerangs_O3(vector<vector<int>>& points);
    private:
      double distance(vector<int>, vector<int>);
  };

}
#endif
