// 1074. Number of Submatrices That Sum to Target

// Given a matrix and a target, return the number of non-empty submatrices that sum to target.

// A submatrix x1, y1, x2, y2 is the set of all cells matrix[x][y] with x1 <= x <= x2 and y1 <= y <= y2.

// Two submatrices (x1, y1, x2, y2) and (x1', y1', x2', y2') are different if they have some coordinate that is different: for example, if x1 != x1'.

class Solution
{
public:
  int numSubmatrixSumTarget(vector<vector<int>> &matrix, int target)
  {
    int ans = 0, n = matrix.size(), m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
      for (int j = 1; j < m; j++)
      {
        matrix[i][j] += matrix[i][j - 1];
      }
    }

    for (int y1 = 0; y1 < m; y1++)
    {
      for (int y2 = y1; y2 < m; y2++)
      {
        for (int x1 = 0; x1 < n; x1++)
        {
          int sum = 0;
          for (int x2 = x1; x2 < n; x2++)
          {
            sum += matrix[x2][y2] - (y1 ? matrix[x2][y1 - 1] : 0);
            ans += sum == target;
          }
        }
      }
    }

    return ans;
  }
};