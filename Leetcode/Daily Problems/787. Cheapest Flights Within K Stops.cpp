// 787. Cheapest Flights Within K Stops

// There are n cities connected by some number of flights. You are given an array flights where flights[i] = [fromi, toi, pricei] indicates that there is a flight from city fromi to city toi with cost pricei.

// You are also given three integers src, dst, and k, return the cheapest price from src to dst with at most k stops. If there is no such route, return -1.

// Example 1:

// Input: n = 4, flights = [[0,1,100],[1,2,100],[2,0,100],[1,3,600],[2,3,200]], src = 0, dst = 3, k = 1
// Output: 700
// Explanation:
// The graph is shown above.
// The optimal path with at most 1 stop from city 0 to 3 is marked in red and has cost 100 + 600 = 700.
// Note that the path through cities [0,1,2,3] is cheaper but is invalid because it uses 2 stops.
// Example 2:

// Input: n = 3, flights = [[0,1,100],[1,2,100],[0,2,500]], src = 0, dst = 2, k = 1
// Output: 200
// Explanation:
// The graph is shown above.
// The optimal path with at most 1 stop from city 0 to 2 is marked in red and has cost 100 + 100 = 200.
// Example 3:

// Input: n = 3, flights = [[0,1,100],[1,2,100],[0,2,500]], src = 0, dst = 2, k = 0
// Output: 500
// Explanation:
// The graph is shown above.
// The optimal path with no stops from city 0 to 2 is marked in red and has cost 500.

// Constraints:

// 1 <= n <= 100
// 0 <= flights.length <= (n * (n - 1) / 2)
// flights[i].length == 3
// 0 <= fromi, toi < n
// fromi != toi
// 1 <= pricei <= 104
// There will not be any multiple flights between two cities.
// 0 <= src, dst, k < n
// src != dst

// Modified Dijkstra
class Solution
{
public:
  int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
  {
    vector<vector<pair<int, int>>> adj(n);
    vector<int> steps(n, INT_MAX);
    for (auto f : flights)
    {
      adj[f[0]].push_back({f[2], f[1]});
    }
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    pq.push({0, src, 0});
    while (!pq.empty())
    {
      auto curr = pq.top();
      int dist = curr[0];
      int node = curr[1];
      int step = curr[2];
      cout << dist << " " << node << " " << step << endl;
      pq.pop();
      if (step > k + 1 || steps[node] < step)
        continue;
      steps[node] = step;
      if (node == dst)
        return dist;
      for (auto neighbours : adj[node])
      {
        pq.push({dist + neighbours.first, neighbours.second, step + 1});
      }
    }
    return -1;
  }
};

// BFS
class Solution
{
public:
  int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
  {
    vector<vector<pair<int, int>>> adj(n);
    vector<int> minDist(n, INT_MAX);
    for (auto f : flights)
    {
      adj[f[0]].push_back({f[2], f[1]});
    }
    queue<vector<int>> pq;
    pq.push({0, src, 0});
    while (!pq.empty())
    {
      auto curr = pq.front();
      int dist = curr[0];
      int node = curr[1];
      int step = curr[2];
      pq.pop();
      if (step > k + 1)
        break;
      minDist[node] = min(minDist[node], dist);
      for (auto neighbours : adj[node])
      {
        if (dist + neighbours.first >= minDist[neighbours.second])
          continue;
        pq.push({dist + neighbours.first, neighbours.second, step + 1});
      }
    }
    if (minDist[dst] == INT_MAX)
      return -1;
    else
      return minDist[dst];
  }
};