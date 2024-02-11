// 36. Valid Sudoku

// Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

// Each row must contain the digits 1-9 without repetition.
// Each column must contain the digits 1-9 without repetition.
// Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
// Note:

// A Sudoku board (partially filled) could be valid but is not necessarily solvable.
// Only the filled cells need to be validated according to the mentioned rules.

class Solution
{
public:
  bool isValidSudoku(vector<vector<char>> &board)
  {
    unordered_map<char, bool> mp;
    int n = board.size(), m = board[0].size();
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (board[i][j] != '.' && mp[board[i][j]])
          return false;
        mp[board[i][j]] = true;
      }
      mp = unordered_map<char, bool>();
    }
    for (int j = 0; j < m; j++)
    {
      for (int i = 0; i < n; i++)
      {
        if (board[i][j] != '.' && mp[board[i][j]])
          return false;
        mp[board[i][j]] = true;
      }
      mp = unordered_map<char, bool>();
    }
    for (int x = 0; x < 9; x += 3)
    {
      for (int y = 0; y < 9; y += 3)
      {
        for (int j = x; j < x + 3; j++)
        {
          for (int i = y; i < y + 3; i++)
          {
            if (board[i][j] != '.' && mp[board[i][j]])
              return false;
            mp[board[i][j]] = true;
          }
        }
        mp = unordered_map<char, bool>();
      }
    }
    return true;
  }
};