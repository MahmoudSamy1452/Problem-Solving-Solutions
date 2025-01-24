class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       int n = graph.size();
       vector<vector<int>> rev(n, vector<int>());
       vector<int> inDegree(n, 0);
       for(int i = 0; i < n; i++) {
            for(int j = 0; j < graph[i].size(); j++) {
                rev[graph[i][j]].push_back(i);
                inDegree[i]++;
            }
       }

        queue<int> q;
        for(int i = 0; i < n; i++) {
            if(inDegree[i] == 0) q.push(i);
        }

        vector<bool> isSafe(n, false);
        while(!q.empty()) {
            int cur = q.front();
            q.pop();
            isSafe[cur] = true;
            for(int node: rev[cur]) {
                inDegree[node]--;
                if(inDegree[node] == 0) q.push(node);
            }
        }

        vector<int> ans;
        for(int i = 0; i < n;  i++) {
            if(isSafe[i]) ans.push_back(i);
        }

        return ans;
    }
};