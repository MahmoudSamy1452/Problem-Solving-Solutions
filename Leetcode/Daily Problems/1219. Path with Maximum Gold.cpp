// 1219. Path with Maximum Gold

// In a gold mine grid of size m x n, each cell in this mine has an integer representing the amount of gold in that cell, 0 if it is empty.

// Return the maximum amount of gold you can collect under the conditions:

// Every time you are located in a cell you will collect all the gold in that cell.
// From your position, you can walk one step to the left, right, up, or down.
// You can't visit the same cell more than once.
// Never visit a cell with 0 gold.
// You can start and stop collecting gold from any position in the grid that has some gold.

// Example 1:

// Input: grid = [[0,6,0],[5,8,7],[0,9,0]]
// Output: 24
// Explanation:
// [[0,6,0],
//  [5,8,7],
//  [0,9,0]]
// Path to get the maximum gold, 9 -> 8 -> 7.
// Example 2:

// Input: grid = [[1,0,7],[2,0,6],[3,4,5],[0,3,0],[9,0,20]]
// Output: 28
// Explanation:
// [[1,0,7],
//  [2,0,6],
//  [3,4,5],
//  [0,3,0],
//  [9,0,20]]
// Path to get the maximum gold, 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7.

// Constraints:

// m == grid.length
// n == grid[i].length
// 1 <= m, n <= 15
// 0 <= grid[i][j] <= 100
// There are at most 25 cells containing gold.

class Solution
{

  const vector<int> dx = {1, -1, 0, 0};
  const vector<int> dy = {0, 0, 1, -1};

  int rec(vector<vector<int>> &grid, int i, int j, int n, int m)
  {
    if (i < 0 || i >= n || j < 0 || j >= m || !grid[i][j])
      return 0;

    int curr = grid[i][j];
    grid[i][j] = 0;
    int mx = INT_MIN;

    for (int k = 0; k < 4; k++)
    {
      mx = max(rec(grid, i + dx[k], j + dy[k], n, m), mx);
    }

    grid[i][j] = curr;
    return mx + grid[i][j];
  }

public:
  int getMaximumGold(vector<vector<int>> &grid)
  {
    int n = grid.size(), m = grid[0].size();
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        mx = max(rec(grid, i, j, n, m), mx);
      }
    }

    return mx;
  }
};