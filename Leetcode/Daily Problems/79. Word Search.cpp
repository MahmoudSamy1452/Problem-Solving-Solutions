// 79. Word Search

// Given an m x n grid of characters board and a string word, return true if word exists in the grid.

// The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

// Example 1:

// Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
// Output: true
// Example 2:

// Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "SEE"
// Output: true
// Example 3:

// Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCB"
// Output: false

// Constraints:

// m == board.length
// n = board[i].length
// 1 <= m, n <= 6
// 1 <= word.length <= 15
// board and word consists of only lowercase and uppercase English letters.

// Follow up: Could you use search pruning to make your solution faster with a larger board?

class Solution
{
public:
  bool rec(vector<vector<bool>> &isVisited, vector<vector<char>> &board, const string &word, int i, int j, int k, int n, int m)
  {
    if (word[k] != board[i][j])
      return false;
    if (k + 1 == word.size())
      return true;
    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};
    isVisited[i][j] = true;
    for (int cnt = 0; cnt < 4; cnt++)
    {
      int newI = i + dx[cnt], newJ = j + dy[cnt];
      if (newI < 0 || newI >= n || newJ < 0 || newJ >= m)
        continue;
      if (!isVisited[newI][newJ] && rec(isVisited, board, word, newI, newJ, k + 1, n, m))
      {
        isVisited[i][j] = false;
        return true;
      }
    }
    isVisited[i][j] = false;
    return false;
  }

  bool exist(vector<vector<char>> &board, string word)
  {
    int n = board.size(), m = board[0].size();
    vector<vector<bool>> isVisited(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (rec(isVisited, board, word, i, j, 0, n, m))
          return true;
      }
    }
    return false;
  }
};