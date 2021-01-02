#include "../../include/med/851LoudAndRich.hpp"

void topSort(
    int v,
    vector<vector<int>>& adj, 
    vector<int>& visited, 
    queue<int>& q)
{
  visited[v] = 1;

  for(int i : adj[v])
  {
    if(!visited[i])
      topSort(i, adj, visited, q);
  }

  q.push(v);
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
  // in normal implementation, topological sort uses a stack.
  // the stack contains the elements in reverse order
  // since the last step iterates in reverse order, use a queue instead
  queue<int> q;
  vector<int> visited(N, 0);
  for(int i = 0; i < N; i++)
  {
    if(!visited[i])
      topSort(i, adj, visited, q);
  }

  // back fill answer in reverse topological order
  vector<int> answer(N, 0); for(int i = 0; i < N; i++) answer[i] = i;

  while(!q.empty())
  {
    int i = q.front();
    q.pop();
    for(int n : adj[i])
    {
      if(quiet[answer[n]] < quiet[answer[i]])
        answer[i] = answer[n];
    }
  }

  return answer;
}
