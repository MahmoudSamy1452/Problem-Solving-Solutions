// 200. Number of Islands

// Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

// Example 1:

// Input: grid = [
//   ["1","1","1","1","0"],
//   ["1","1","0","1","0"],
//   ["1","1","0","0","0"],
//   ["0","0","0","0","0"]
// ]
// Output: 1
// Example 2:

// Input: grid = [
//   ["1","1","0","0","0"],
//   ["1","1","0","0","0"],
//   ["0","0","1","0","0"],
//   ["0","0","0","1","1"]
// ]
// Output: 3

// Constraints:

// m == grid.length
// n == grid[i].length
// 1 <= m, n <= 300
// grid[i][j] is '0' or '1'.

class Solution
{

  void print(vector<vector<char>> &newGrid)
  {
    int n = newGrid.size(), m = newGrid[0].size();
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cout << newGrid[i][j] << " ";
      }
      cout << endl;
    }
    cout << "________________________________" << endl;
  }

  void bfs(int i, int j, vector<vector<char>> &newGrid)
  {
    queue<pair<int, int>> q;
    vector<int> dx = {0, 0, -1, 1}, dy = {-1, 1, 0, 0};
    q.push({i, j});
    while (!q.empty())
    {
      pair<int, int> p = q.front();
      q.pop();
      if (newGrid[p.first][p.second] == '1')
      {
        for (int x = 0; x < 4; x++)
          q.push({p.first + dx[x], p.second + dy[x]});
        newGrid[p.first][p.second] = '2';
      }
    }
  }

public:
  int numIslands(vector<vector<char>> &grid)
  {
    int n = grid.size(), m = grid[0].size(), ans = 0;
    vector<vector<char>> newGrid(n + 2, vector<char>(m + 2, '0'));
    for (int i = 1; i <= n; i++)
      for (int j = 1; j <= m; j++)
        newGrid[i][j] = grid[i - 1][j - 1];
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= m; j++)
      {
        if (newGrid[i][j] == '1')
        {
          ans++;
          bfs(i, j, newGrid);
        }
      }
    }
    return ans;
  }
};