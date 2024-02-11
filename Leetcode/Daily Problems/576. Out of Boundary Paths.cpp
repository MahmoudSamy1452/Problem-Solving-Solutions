// 576. Out of Boundary Paths

// There is an m x n grid with a ball. The ball is initially at the position [startRow, startColumn]. You are allowed to move the ball to one of the four adjacent cells in the grid (possibly out of the grid crossing the grid boundary). You can apply at most maxMove moves to the ball.

// Given the five integers m, n, maxMove, startRow, startColumn, return the number of paths to move the ball out of the grid boundary. Since the answer can be very large, return it modulo 109 + 7.

class Solution
{
public:
  int findPaths(int m, int n, int maxMove, int startRow, int startColumn)
  {
    int mod = 1000000000 + 7;
    vector<vector<vector<int>>> dp(n + 2, vector<vector<int>>(m + 2, vector<int>(maxMove + 1, 0)));
    for (int i = 0; i <= maxMove; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        dp[j][0][i]++;
        dp[j][m + 1][i]++;
      }
      for (int j = 1; j <= m; j++)
      {
        dp[0][j][i]++;
        dp[n + 1][j][i]++;
      }
    }
    for (int i = 1; i <= maxMove; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        for (int k = 1; k <= m; k++)
        {
          dp[j][k][i] = dp[j - 1][k][i - 1] % mod;
          dp[j][k][i] = (dp[j][k][i] + dp[j + 1][k][i - 1]) % mod;
          dp[j][k][i] = (dp[j][k][i] + dp[j][k - 1][i - 1]) % mod;
          dp[j][k][i] = (dp[j][k][i] + dp[j][k + 1][i - 1]) % mod;
        }
      }
    }

    return dp[startColumn + 1][startRow + 1][maxMove];
  }
};