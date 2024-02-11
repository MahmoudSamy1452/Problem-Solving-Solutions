#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

void dfs(int i, vector<vector<int>> &adj, map<int, int, greater<int>> &finish_time, vector<bool> &is_visited, int &time, bool record)
{
  time++;
  is_visited[i] = true;
  for (int neighbour : adj[i])
  {
    if (is_visited[neighbour])
      continue;
    dfs(neighbour, adj, finish_time, is_visited, time, record);
  }
  if (record)
    finish_time[time] = i;
  time++;
}

void solve()
{
  long long N, M;
  cin >> N >> M;

  // creating graph
  vector<vector<int>> adj(N);
  int s, e;
  for (int i = 0; i < M; i++)
  {
    cin >> s >> e;
    adj[s].push_back(e);
  }

  // calculating finish times
  map<int, int, greater<int>> finish_time;
  vector<bool> is_visited(N, false);
  int time = 0;
  for (int i = 0; i < N; i++)
  {
    if (is_visited[i])
      continue;
    dfs(i, adj, finish_time, is_visited, time, true);
  }

  // reversing edges
  vector<vector<int>> rev(N);
  for (int i = 0; i < N; i++)
  {
    for (int e : adj[i])
    {
      rev[e].push_back(i);
    }
  }

  // counting strongly connected components
  int count = 0;
  fill(is_visited.begin(), is_visited.end(), 0);
  for (auto p : finish_time)
  {
    if (is_visited[p.second])
      continue;
    dfs(p.second, rev, finish_time, is_visited, time, false);
    count++;
  }

  cout << count++;
}

int main()
{
  fast_cin();
  ll t = 1;
  // cin >> t;
  for (int it = 1; it <= t; it++)
  {
    // cout << "Case #" << it << ": ";
    solve();
  }
  return 0;
}