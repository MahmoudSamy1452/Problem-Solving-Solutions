// 85. Maximal Rectangle

// Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

// Example 1:

// Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
// Output: 6
// Explanation: The maximal rectangle is shown in the above picture.
// Example 2:

// Input: matrix = [["0"]]
// Output: 0
// Example 3:

// Input: matrix = [["1"]]
// Output: 1

// Constraints:

// rows == matrix.length
// cols == matrix[i].length
// 1 <= row, cols <= 200
// matrix[i][j] is '0' or '1'.

class Solution
{
public:
  int maximalRectangle(vector<vector<char>> &matrix)
  {
    if (matrix.empty() || matrix[0].empty())
      return 0;

    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<int> heights(cols + 1, 0);
    int maxArea = 0;

    for (const auto &row : matrix)
    {
      for (int i = 0; i < cols; i++)
      {
        heights[i] = (row[i] == '1') ? heights[i] + 1 : 0;
      }

      int n = heights.size();

      for (int i = 0; i < n; i++)
      {
        for (int j = i, minHeight = INT_MAX; j < n; j++)
        {
          minHeight = min(minHeight, heights[j]);
          int area = minHeight * (j - i + 1);
          maxArea = max(maxArea, area);
        }
      }
    }

    return maxArea;
  }
};