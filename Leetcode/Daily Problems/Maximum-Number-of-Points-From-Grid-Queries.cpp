class Solution {
public:
    vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
        int m = grid.size(), n = grid[0].size(), k = queries.size();
        vector<int> ans(k, 0);
        vector<pair<int, int>> dir{{0,1}, {1,0}, {0,-1}, {-1, 0}};

        vector<pair<int, int>> q;
        for(int i = 0; i < k; i++) {
            q.push_back({queries[i], i});
        }
        sort(q.begin(), q.end());

        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        pq.push({grid[0][0], {0, 0}});
        visited[0][0] = true;
        int totalPoints = 0;
        for(auto [queryValue, i]: q) {
            while(!pq.empty() && pq.top().first < queryValue) {
                auto [cellvalue, position] = pq.top();
                pq.pop();
                int r = position.first, c = position.second;
                totalPoints++;
                for(auto [rowOffset, colOffset]: dir) {
                    int newRow = r + rowOffset, newCol = c + colOffset;
                    if(newRow >= 0 && newCol >= 0 && newRow < m && newCol < n && !visited[newRow][newCol]) {
                        pq.push({grid[newRow][newCol], {newRow, newCol}});
                        visited[newRow][newCol] = true;
                    }
                }
            }
            ans[i] = totalPoints;
        }
        return ans;
    }
};