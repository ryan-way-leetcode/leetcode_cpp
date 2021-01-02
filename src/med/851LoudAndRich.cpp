#include "../../include/med/851LoudAndRich.hpp"

void topSort(
    int v,
    vector<vector<int>>& adj, 
    vector<int>& visited, 
    stack<int>& s)
{
  visited[v] = 1;

  for(int i : adj[v])
  {
    if(!visited[i])
      topSort(i, adj, visited, s);
  }

  s.push(v);
}

vector<int> LoudAndRich::Solution::loudAndRich(
    vector<vector<int>>& richer, 
    vector<int>& quiet)
{
  const int N = quiet.size();
  // construct adjacency list
  vector<vector<int>> adj(N, vector<int>{});
  for(vector<int> v : richer)
  {
    adj[v[1]].push_back(v[0]);
  }
  // topological sort
  stack<int> s;
  vector<int> order, visited(N, 0);
  for(int i = 0; i < N; i++)
  {
    if(!visited[i])
      topSort(i, adj, visited, s);
  }
  while(!s.empty())
  {
    order.push_back(s.top());
    s.pop();
  }

  // back fill answer in reverse topological order
  vector<int> answer; for(int i = 0; i < N; i++) answer.push_back(i);

  for(int i = order.size()-1; i >= 0; i--)
  {
    for(int n : adj[order[i]])
    {
      if(quiet[answer[n]] < quiet[answer[order[i]]])
        answer[order[i]] = answer[n];
    }
  }

  return answer;
}
