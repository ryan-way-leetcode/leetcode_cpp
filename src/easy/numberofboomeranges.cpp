#include "../../include/easy/numberofboomerangs.hpp"

double NumberOfBoomerangs::Solution::distance(
    vector<int> point1,
    vector<int> point2)
{
  return sqrt(pow(point1[0]-point2[0], 2) + pow(point1[1]-point2[1], 2));
}

/*
 *
 */
int NumberOfBoomerangs::Solution::numberOfBoomerangs(
    vector<vector<int>>& points)
{
  return this->numberOfBoomerangs_O2_Fast(points);
}

int NumberOfBoomerangs::Solution::numberOfBoomerangs_O2_Fast(
    vector<vector<int>>& points)
{
  set<pair<int, int>> sPoints = set<pair<int, int>>();
  for(vector<vector<int>>::iterator it = points.begin();
      it != points.end(); it++)
  {
    sPoints.insert(pair<int, int>((*it)[0], (*it)[1]));
  }

  int count = 0;
  for(set<pair<int, int>>::iterator i = sPoints.begin();
      i != sPoints.end(); i++)
  {
    set<pair<int, int>> counted_distances = set<pair<int, int>>();
    for(set<pair<int, int>>::iterator j = std::next(i);
        j != sPoints.end(); j++)
    {
      pair<int, int> distance =
        pair<int, int>(std::abs(i->first-j->first), std::abs(i->second-j->second));

      if(counted_distances.count(distance) == 0)
      {
        counted_distances.insert(distance);
        int num_this_distance = 
         counted_distances.count(pair<int, int>(i->first+distance.first, i->second+distance.second)) +
         counted_distances.count(pair<int, int>(i->first-distance.first, i->second+distance.second)) +
         counted_distances.count(pair<int, int>(i->first+distance.first, i->second-distance.second)) +
         counted_distances.count(pair<int, int>(i->first-distance.first, i->second-distance.second)); 

        count += num_this_distance*(num_this_distance-1);
      } 
    }
  }

  return count;
}

/* for each point, calculate the number of points
 * at a given distance
 *
 * give a point p, distance d, number of points that are distance d from p (n)
 *  calculate the number of possible boomerangs
 *
 */
int NumberOfBoomerangs::Solution::numberOfBoomerangs_O2(
    vector<vector<int>>& points)
{
  //will contain for each point p, create a map of distance d to number of 
  //points that are d distance from p
  map<pair<int, int>, map<double, int>> distances = 
   map<pair<int, int>, map<double, int>>(); 

  for(vector<vector<int>>::iterator i = points.begin();
      i != points.end(); i++)
  {
    for(vector<vector<int>>::iterator j = i+1; 
        j != points.end(); j++)
    {
      pair<int, int> pair_i = pair<int, int>((*i)[0], (*i)[1]);
      pair<int, int> pair_j = pair<int, int>((*j)[0], (*j)[1]);
      double distance = this->distance(*i, *j);

      if(distances.count(pair_j) == 0)
      {
        distances[pair_j] = map<double, int>();
      }

      if(distances[pair_i].count(distance) == 0)
      {
        distances[pair_i][distance] = 0;
      }
      
      if(distances[pair_j].count(distance) == 0)
      {
        distances[pair_j][distance] = 0;
      }

      distances[pair_i][distance] += 1; 
      distances[pair_j][distance] += 1; 

    }
  }

  int count = 0;
  int max = 0; 
  for(map<pair<int, int>, map<double, int>>::iterator i = distances.begin();
      i != distances.end(); i++)
  {
    for(map<double, int>::iterator j = i->second.begin();
       j != i->second.end(); j++) 
    {
      count += j->second*(j->second-1);
      if(j->first > max)
      {
        max = j->first;
      }
    }
  }
  cout << max << endl;
  return count;
}

//O(n^3)
int NumberOfBoomerangs::Solution::numberOfBoomerangs_O3(
    vector<vector<int>>& points)
{
  int count = 0;
  for(int i = 0; i < points.size(); i++)
  {
    for(int j = i+1; j < points.size(); j++)
    {
      for(int k = j+1; k < points.size(); k++)
      {
        if(this->distance(points[j], points[i]) ==
            this->distance(points[j], points[k]))
        {
          count += 2;
        }

        if(this->distance(points[i], points[j]) ==
            this->distance(points[i], points[k]))
        {
          count += 2;
        }

        if(this->distance(points[k], points[i]) ==
            this->distance(points[k], points[j]))
        {
          count += 2;
        }
      }
    }
  }  
  return count;
}
