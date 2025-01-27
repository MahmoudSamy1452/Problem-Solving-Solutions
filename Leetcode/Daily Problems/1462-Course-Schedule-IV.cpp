class Solution {

    void preprocess(int numCourses, vector<vector<int>>& prerequisites,
                    unordered_map<int, vector<int>>& adjList,
                    vector<vector<bool>>& isPrerequisite) {
        for (int i = 0; i < numCourses; i++) {
            queue<int> q;
            q.push(i);

            while (!q.empty()) {
                int node = q.front();
                q.pop();

                for (auto adj : adjList[node]) {
                    if (!isPrerequisite[i][adj]) {
                        isPrerequisite[i][adj] = true;
                        q.push(adj);
                    }
                }
            }
        }
    }

public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        unordered_map<int, vector<int>> adj; int a, b;

        for(int i = 0; i < prerequisites.size(); i++) {
            a = prerequisites[i][0], b = prerequisites[i][1];
            adj[a].push_back(b);
        }

        vector<vector<bool>> isPrerequisite(numCourses, vector<bool>(numCourses, false));
        preprocess(numCourses, prerequisites, adj, isPrerequisite);

        vector<bool> ans;
        for(int i = 0; i < queries.size(); i++) {
            a = queries[i][0]; b = queries[i][1];
            ans.push_back(isPrerequisite[a][b]);
        }

        return ans;
    }
};