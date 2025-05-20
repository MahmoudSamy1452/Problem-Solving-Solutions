class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses, vector<int>());
        vector<int> inDegree(numCourses, 0);
        queue<int> openCourses; vector<int> ans;
        for(const auto& p: prerequisites) {
            adj[p[1]].push_back(p[0]);
            inDegree[p[0]]++;
        }
        for(int i = 0; i < numCourses; i++) if(inDegree[i] == 0) openCourses.push(i);
        while(!openCourses.empty()) {
            int course = openCourses.front(); openCourses.pop();
            for(auto& neighbor: adj[course])
                if(--inDegree[neighbor] == 0) openCourses.push(neighbor);
            ans.push_back(course);
        }
        if(ans.size() != numCourses) return {};
        return ans;
    }
};