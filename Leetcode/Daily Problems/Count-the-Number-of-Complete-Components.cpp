class Solution {
    void debug(vector<int>& v){
        for(int& x: v) cout << x << " ";
        cout << endl;
    }

    int dfs(int i, vector<vector<int>>& adj, vector<int>& visited, vector<int>& group, int g) {
        cout << i << endl;
        if(visited[i]++) return 0;
        group[i] = g;
        int count = 1;
        for(int& neighbor: adj[i]) {
            count += dfs(neighbor, adj, visited, group, g);
        }
        return count;
    }

public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);  int ans = 0;
        for(auto& edge: edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        vector<int> visited(n), group(n, -1); int g = 0;
        for(int i = 0; i < n; i++) {
            int count = dfs(i, adj, visited, group, g);
            if(!count) continue;
            cout << "Count: " << count << endl;
            bool isComplete = true;
            debug(group); debug(visited);
            for(int j = 0; j < n; j++) {
                if(group[j] == g && visited[j] < count - 1) {
                    isComplete = false;
                }
            }
            cout << endl;
            if(isComplete) ans++;
            g++;
        }
        return ans;
    }
};