// 1463. Cherry Pickup II

// You are given a rows x cols matrix grid representing a field of cherries where grid[i][j] represents the number of cherries that you can collect from the (i, j) cell.

// You have two robots that can collect cherries for you:

// Robot #1 is located at the top-left corner (0, 0), and
// Robot #2 is located at the top-right corner (0, cols - 1).
// Return the maximum number of cherries collection using both robots by following the rules below:

// From a cell (i, j), robots can move to cell (i + 1, j - 1), (i + 1, j), or (i + 1, j + 1).
// When any robot passes through a cell, It picks up all cherries, and the cell becomes an empty cell.
// When both robots stay in the same cell, only one takes the cherries.
// Both robots cannot move outside of the grid at any moment.
// Both robots should reach the bottom row in grid.

class Solution
{
public:
  int maximizeCherry(vector<vector<int>> &grid, int n, int m, vector<vector<vector<int>>> &dp, int i, int jA, int jB)
  {
    if (i == n || jA < 0 || jA >= m || jB < 0 || jB >= m)
      return 0;

    if (dp[i][jA][jB] != -1)
      return dp[i][jA][jB];

    int result = grid[i][jA] + grid[i][jB];

    int mx = 0;
    for (int x = jA - 1; x <= jA + 1; x++)
      for (int y = jB - 1; y <= jB + 1; y++)
        if (x < y)
          mx = max(mx, maximizeCherry(grid, n, m, dp, i + 1, x, y));

    result += mx;
    return dp[i][jA][jB] = result;
  }

  int cherryPickup(vector<vector<int>> &grid)
  {
    int n = grid.size(), m = grid[0].size();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
    return maximizeCherry(grid, n, m, dp, 0, 0, m - 1);
  }
};