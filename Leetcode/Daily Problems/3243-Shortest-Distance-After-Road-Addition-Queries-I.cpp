class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> adj(n, vector<int>());
        vector<int> ans; vector<bool> visited(n, false);
        queue<int> q;
    
        for(int i = 0; i < n; i++)
            adj[i].push_back(i+1);
        for(auto query: queries) {
            adj[query[0]].push_back(query[1]);
            q.push(0);
            int lvl = 0;
            while(q.size()) {
                int size = q.size();
                while(size--) {
                    int cur = q.front(); q.pop();
                    if(visited[cur]) continue;
                    visited[cur] = true;
                    if(cur == n-1) {
                        q=queue<int>(); visited = vector<bool>(n, false);
                        break;
                    }
                    for(int neighbor: adj[cur]) q.push(neighbor);
                }
                lvl++;
            }
            ans.push_back(lvl-1);
        }

        return ans;
    }
};