// 2812. Find the Safest Path in a Grid

// You are given a 0-indexed 2D matrix grid of size n x n, where (r, c) represents:

// A cell containing a thief if grid[r][c] = 1
// An empty cell if grid[r][c] = 0
// You are initially positioned at cell (0, 0). In one move, you can move to any adjacent cell in the grid, including cells containing thieves.

// The safeness factor of a path on the grid is defined as the minimum manhattan distance from any cell in the path to any thief in the grid.

// Return the maximum safeness factor of all paths leading to cell (n - 1, n - 1).

// An adjacent cell of cell (r, c), is one of the cells (r, c + 1), (r, c - 1), (r + 1, c) and (r - 1, c) if it exists.

// The Manhattan distance between two cells (a, b) and (x, y) is equal to |a - x| + |b - y|, where |val| denotes the absolute value of val.

// Example 1:

// Input: grid = [[1,0,0],[0,0,0],[0,0,1]]
// Output: 0
// Explanation: All paths from (0, 0) to (n - 1, n - 1) go through the thieves in cells (0, 0) and (n - 1, n - 1).
// Example 2:

// Input: grid = [[0,0,1],[0,0,0],[0,0,0]]
// Output: 2
// Explanation: The path depicted in the picture above has a safeness factor of 2 since:
// - The closest cell of the path to the thief at cell (0, 2) is cell (0, 0). The distance between them is | 0 - 0 | + | 0 - 2 | = 2.
// It can be shown that there are no other paths with a higher safeness factor.
// Example 3:

// Input: grid = [[0,0,0,1],[0,0,0,0],[0,0,0,0],[1,0,0,0]]
// Output: 2
// Explanation: The path depicted in the picture above has a safeness factor of 2 since:
// - The closest cell of the path to the thief at cell (0, 3) is cell (1, 2). The distance between them is | 0 - 1 | + | 3 - 2 | = 2.
// - The closest cell of the path to the thief at cell (3, 0) is cell (3, 2). The distance between them is | 3 - 3 | + | 0 - 2 | = 2.
// It can be shown that there are no other paths with a higher safeness factor.

// Constraints:

// 1 <= grid.length == n <= 400
// grid[i].length == n
// grid[i][j] is either 0 or 1.
// There is at least one thief in the grid.

class Solution
{
public:
  int maximumSafenessFactor(vector<vector<int>> &grid)
  {
    int n = grid.size();
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (grid[i][j] == 1)
        {
          q.push({i, j});
          grid[i][j] = 0;
        }
        else
        {
          grid[i][j] = -1;
        }
      }
    }

    while (!q.empty())
    {
      int size = q.size();
      while (size-- > 0)
      {
        auto curr = q.front();
        q.pop();
        for (auto &d : dir)
        {
          int di = curr.first + d[0];
          int dj = curr.second + d[1];
          int val = grid[curr.first][curr.second];
          if (isValidCell(grid, di, dj) && grid[di][dj] == -1)
          {
            grid[di][dj] = val + 1;
            q.push({di, dj});
          }
        }
      }
    }

    priority_queue<vector<int>> pq;
    pq.push(vector<int>{grid[0][0], 0, 0});
    grid[0][0] = -1;

    while (!pq.empty())
    {
      auto curr = pq.top();
      pq.pop();

      if (curr[1] == n - 1 && curr[2] == n - 1)
      {
        return curr[0];
      }

      for (auto &d : dir)
      {
        int di = d[0] + curr[1];
        int dj = d[1] + curr[2];
        if (isValidCell(grid, di, dj) && grid[di][dj] != -1)
        {
          pq.push(vector<int>{min(curr[0], grid[di][dj]), di, dj});
          grid[di][dj] = -1;
        }
      }
    }

    return -1;
  }

private:
  vector<vector<int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

  bool isValidCell(vector<vector<int>> &mat, int i, int j)
  {
    int n = mat.size();
    return i >= 0 && j >= 0 && i < n && j < n;
  }
};