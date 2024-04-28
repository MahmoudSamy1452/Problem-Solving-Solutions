// 834. Sum of Distances in Tree

// There is an undirected connected tree with n nodes labeled from 0 to n - 1 and n - 1 edges.

// You are given the integer n and the array edges where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree.

// Return an array answer of length n where answer[i] is the sum of the distances between the ith node in the tree and all other nodes.

// Example 1:

// Input: n = 6, edges = [[0,1],[0,2],[2,3],[2,4],[2,5]]
// Output: [8,12,6,10,10,10]
// Explanation: The tree is shown above.
// We can see that dist(0,1) + dist(0,2) + dist(0,3) + dist(0,4) + dist(0,5)
// equals 1 + 1 + 2 + 2 + 2 = 8.
// Hence, answer[0] = 8, and so on.

// Example 2:

// Input: n = 1, edges = []
// Output: [0]

// Example 3:

// Input: n = 2, edges = [[1,0]]
// Output: [1,1]
 
// Constraints:

// 1 <= n <= 3 * 1e4
// edges.length == n - 1
// edges[i].length == 2
// 0 <= ai, bi < n
// ai != bi
// The given input represents a valid tree.

class Solution {
private:
    void dfs1(vector<vector<int>>& adj, vector<int> &cnt, vector<int> &ans, int parent, int i){
        for(int& n : adj[i]){
            if(n == parent) continue;
            dfs1(adj, cnt, ans, i, n);
            cnt[i] += cnt[n];
            ans[i] += ans[n] + cnt[n];
        }
    }

    void dfs2(vector<vector<int>>& adj, vector<int> &cnt, vector<int> &ans, int parent, int i, int s){
        if(parent != -1)
            ans[i] = ans[parent] - cnt[i] + (s-cnt[i]);
        for(int& n : adj[i]){
            if(n == parent) continue;
            dfs2(adj, cnt, ans, i, n, s);
        }
    }

public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n, vector<int>());
        for(const vector<int>& edge: edges){
            int u = edge[0], v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> cnt(n, 1), ans(n, 0);
        dfs1(adj, cnt, ans, -1, 0);
        dfs2(adj, cnt, ans, -1, 0, n);

        return ans;
    }
};