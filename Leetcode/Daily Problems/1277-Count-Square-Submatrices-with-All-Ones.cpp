class Solution {
    int solve(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        if(i >= grid.size() || j >= grid[0].size()) return 0;
        if(!grid[i][j]) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int right = solve(i, j + 1, grid, dp);
        int diag = solve(i + 1, j + 1, grid, dp);
        int left = solve(i + 1, j, grid, dp);
        return dp[i][j] = 1 + min({right, diag, left});
    }
public:
    int countSquares(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), -1));
        int ans = 0;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                ans += solve(i, j, matrix, dp);
            }
        }
        return ans;
    }
};