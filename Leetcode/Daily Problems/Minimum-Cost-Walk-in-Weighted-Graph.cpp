class Solution {
    void debug(vector<int>& group) {
        for(int& gp: group) {
            cout << gp << " ";
        }
        cout << endl;
    }

    vector<int> convertIdToNodes(string id) {
        string s, e; bool underscore = false;
        for(char& c: id) {
            if(c == '_') { underscore = true; continue; }
            if(underscore) s += c;
            else e += c;
        }
        return {stoi(s), stoi(e)};
    }

    void dfs(int i, const int& groupId, vector<int>& group, vector<vector<pair<int, int>>>& adj) {
        group[i] = groupId;
        for(auto p: adj[i]) {
            int neighbor = p.first, weight = p.second;
            if(group[neighbor] != -1) continue;
            dfs(neighbor, groupId, group, adj);
        }
    }
public:
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        vector<int> group(n, -1), groupScore(n, INT_MAX); int groupId = 0;
        vector<vector<pair<int, int>>> adj(n);
        unordered_map<string, int> ANDEdge;
        for(auto& edge: edges) {
            int s = edge[0], e = edge[1], w = edge[2];
            string id;
            if(s < e) id = to_string(s) + '_' + to_string(e);
            else id = to_string(e) + '_' + to_string(s);
            if(ANDEdge.count(id)) ANDEdge[id] &= w;
            else ANDEdge[id] = w;
        }

        for(auto& edge: ANDEdge) {
            string id = edge.first; int w = edge.second;
            vector<int> nodes = convertIdToNodes(id);
            int s = nodes[0], e = nodes[1];
            adj[s].push_back({e, w});
            adj[e].push_back({s, w});
        }

        for(int i = 0; i < n; i++) {
            if(group[i] != -1) continue;
            dfs(i, groupId, group, adj);
            groupId++;
        }

        for(auto& edge: edges) {
            int s = edge[0], e = edge[1], w = edge[2];
            groupScore[group[s]] &= w;
        }

        vector<int> ans;
        for(auto& q: query) {
            int s = q[0], e = q[1];
            if(group[s] != group[e]) ans.push_back(-1);
            else ans.push_back(groupScore[group[s]]);
        }
        return ans;
    }
};