class Solution {
    vector<int> dirx{0, 0, 1, -1}, diry{1, -1, 0, 0};
    bool isValid(int r, int c, int m, int n){ return r >= 0 && r < m && c >= 0 && c < n; }
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size(), n = isWater[0].size();
        queue<vector<int>> q;
        vector<vector<int>> ans(m, vector<int>(n)); 
        vector<vector<bool>> visited(m, vector<bool>(n));
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(isWater[i][j]){
                    q.push({i, j, 0});
                    visited[i][j] = true;
                }
            }
        }

        while(!q.empty()) {
            vector<int> cur = q.front();
            q.pop();
            ans[cur[0]][cur[1]] = cur[2];
            for(int i = 0; i < 4; i++) {
                int x = cur[0] + dirx[i], y = cur[1] + diry[i];
                if(!isValid(x, y, m, n) || visited[x][y]) continue;
                visited[x][y] = true;
                q.push({x, y, cur[2] + 1});
            }
        }

        return ans;
    }
};