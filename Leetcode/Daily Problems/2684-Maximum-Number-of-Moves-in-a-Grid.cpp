class Solution {
    int rec(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp, int prev) {
        if(i < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] <= prev) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        dp[i][j] = max({
            rec(i - 1, j + 1, grid, dp, grid[i][j]),
            rec(i, j + 1, grid, dp, grid[i][j]),
            rec(i + 1, j + 1, grid, dp, grid[i][j])
        }) + 1;
        return dp[i][j];
    }
public:
    int maxMoves(vector<vector<int>>& grid) {
        int ans = 0; vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));
        for(int i = 0;i < grid.size(); i++)
            ans = max(ans, rec(i, 0, grid, dp, 0));
        return ans - 1;
    }
};