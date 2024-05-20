// 5. Longest Palindromic Substring

// Given a string s, return the longest
// palindromic substring in s.

// Example 1:

// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
// Example 2:

// Input: s = "cbbd"
// Output: "bb"

// Constraints:

// 1 <= s.length <= 1000
// s consist of only digits and English letters.

class Solution
{
public:
  string longestPalindrome(string s)
  {
    int n = s.size();
    vector<int> ans{0, 0};
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
      dp[i][i] = true;
    }
    for (int diff = 1; diff < n; diff++)
    {
      for (int i = 0; i < n - diff; i++)
      {
        int j = i + diff;
        if (s[i] == s[j] && (dp[i + 1][j - 1] || i + 1 > j - 1))
        {
          dp[i][j] = true;
          ans = {i, j};
        }
      }
    }
    return s.substr(ans[0], ans[1] - ans[0] + 1);
  }
};