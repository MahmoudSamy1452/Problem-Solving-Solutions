class Solution {
    vector<int> dirx{0, 0, 1, -1}, diry{1, -1, 0, 0};
    bool isValid(int m, int n, int i, int j) {
        return i >= 0 && j >= 0 && i < m && j < n;
    }

    int dfs(int& m, int& n, vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j) {
        if(!isValid(m, n, i, j) || !grid[i][j] || visited[i][j]) return 0;
        int ans = grid[i][j]; visited[i][j] = true;
        for(int d = 0; d < 4; d++) {
            ans += dfs(m, n, grid, visited, i + dirx[d], j + diry[d]);
        }
        return ans;
    }
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0;

        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] && !visited[i][j]) ans = max(ans, dfs(m, n, grid, visited, i, j));
            }
        }

        return ans;
    }
};