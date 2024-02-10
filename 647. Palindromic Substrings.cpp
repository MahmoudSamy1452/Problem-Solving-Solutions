// 647. Palindromic Substrings

// Given a string s, return the number of palindromic substrings in it.

// A string is a palindrome when it reads the same backward as forward.

// A substring is a contiguous sequence of characters within the string.

// Example 1:

// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".
// Example 2:

// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".

// Constraints:

// 1 <= s.length <= 1000
// s consists of lowercase English letters.

class Solution
{
public:
  bool count(string s, vector<vector<int>> &dp, int i, int j)
  {
    if (j < i)
      return true;

    if (dp[i][j] != -1)
      return dp[i][j];

    if (s[i] == s[j] && count(s, dp, i + 1, j - 1))
      return dp[i][j] = 1;
    else
      return dp[i][j] = 0;
  }

  int countSubstrings(string s)
  {
    int n = s.size(), ans = n;
    vector<vector<int>> dp(n, vector<int>(n, -1));

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (s[i] == s[j] && count(s, dp, i + 1, j - 1))
        {
          dp[i][j] = 1;
          ans++;
        }
      }
    }
    return ans;
  }
};
