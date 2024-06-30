// 1579. Remove Max Number of Edges to Keep Graph Fully Traversable

// Alice and Bob have an undirected graph of n nodes and three types of edges:

// Type 1: Can be traversed by Alice only.
// Type 2: Can be traversed by Bob only.
// Type 3: Can be traversed by both Alice and Bob.
// Given an array edges where edges[i] = [typei, ui, vi] represents a bidirectional edge of type typei between nodes ui and vi, find the maximum number of edges you can remove so that after removing the edges, the graph can still be fully traversed by both Alice and Bob. The graph is fully traversed by Alice and Bob if starting from any node, they can reach all other nodes.

// Return the maximum number of edges you can remove, or return -1 if Alice and Bob cannot fully traverse the graph.

// Example 1:

// Input: n = 4, edges = [[3,1,2],[3,2,3],[1,1,3],[1,2,4],[1,1,2],[2,3,4]]
// Output: 2
// Explanation: If we remove the 2 edges [1,1,2] and [1,1,3]. The graph will still be fully traversable by Alice and Bob. Removing any additional edge will not make it so. So the maximum number of edges we can remove is 2.

// Example 2:

// Input: n = 4, edges = [[3,1,2],[3,2,3],[1,1,4],[2,1,4]]
// Output: 0
// Explanation: Notice that removing any edge will not make the graph fully traversable by Alice and Bob.
// Example 3:

// Input: n = 4, edges = [[3,2,3],[1,1,2],[2,3,4]]
// Output: -1
// Explanation: In the current graph, Alice cannot reach node 4 from the other nodes. Likewise, Bob cannot reach 1. Therefore it's impossible to make the graph fully traversable.

// Constraints:

// 1 <= n <= 105
// 1 <= edges.length <= min(105, 3 * n * (n - 1) / 2)
// edges[i].length == 3
// 1 <= typei <= 3
// 1 <= ui < vi <= n
// All tuples (typei, ui, vi) are distinct.

class DSU
{
public:
  vector<int> parent, rank;

  DSU(int n)
  {
    parent.resize(n);
    rank.resize(n, 0);
    for (int i = 0; i < n; i++)
      parent[i] = i;
  }

  int Find(int i)
  {
    return parent[i] = (parent[i] == i) ? i : Find(parent[i]);
  }

  bool Union(int i, int j)
  {
    int p_i = Find(i), p_j = Find(j);
    if (p_i != p_j)
    {
      if (rank[p_i] < rank[p_j])
        parent[p_i] = p_j;
      else
        parent[p_j] = p_i;
      rank[p_i] += rank[p_i] == rank[p_j];
      return true;
    }
    return false;
  }
};

class Solution
{
public:
  int maxNumEdgesToRemove(int n, vector<vector<int>> &edges)
  {
    DSU bob(n + 1), alice(n + 1);
    int bob_edges = 0, alice_edges = 0, removed_edges = 0;

    for (int i = 0; i < edges.size(); i++)
    {
      vector<int> edge = edges[i];
      if (edge[0] != 3)
        continue;
      if (bob.Union(edge[1], edge[2]) && alice.Union(edge[1], edge[2]))
      {
        bob_edges++;
        alice_edges++;
      }
      else
      {
        removed_edges++;
      }
    }

    for (int i = 0; i < edges.size(); i++)
    {
      auto edge = edges[i];
      if (edge[0] == 3)
        continue;
      if (edge[0] == 2 && bob.Union(edge[1], edge[2]))
      {
        bob_edges++;
      }
      else if (edge[0] == 1 && alice.Union(edge[1], edge[2]))
      {
        alice_edges++;
      }
      else
        removed_edges++;
    }
    return (alice_edges == n - 1 && bob_edges == n - 1) ? removed_edges : -1;
  }
};