// 2370. Longest Ideal Subsequence

// You are given a string s consisting of lowercase letters and an integer k. We call a string t ideal if the following conditions are satisfied:

// t is a subsequence of the string s.
// The absolute difference in the alphabet order of every two adjacent letters in t is less than or equal to k.
// Return the length of the longest ideal string.

// A subsequence is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.

// Note that the alphabet order is not cyclic. For example, the absolute difference in the alphabet order of 'a' and 'z' is 25, not 1.

// Example 1:

// Input: s = "acfgbd", k = 2
// Output: 4
// Explanation: The longest ideal string is "acbd". The length of this string is 4, so 4 is returned.
// Note that "acfgbd" is not ideal because 'c' and 'f' have a difference of 3 in alphabet order.
// Example 2:

// Input: s = "abcd", k = 3
// Output: 4
// Explanation: The longest ideal string is "abcd". The length of this string is 4, so 4 is returned.

// Constraints:

// 1 <= s.length <= 1e5
// 0 <= k <= 25
// s consists of lowercase English letters.

class Solution
{
public:
  int solve(string &s, const int &n, const int &k, int i, int last, vector<vector<int>> &dp)
  {
    if (i == n)
      return 0;
    if (dp[i][last - 'a'] != -1)
      return dp[i][last - 'a'];
    int take = 0, notTake = 0;
    if (last == '{' || abs(s[i] - last) <= k)
      take = 1 + solve(s, n, k, i + 1, s[i], dp);
    notTake = solve(s, n, k, i + 1, last, dp);
    return dp[i][last - 'a'] = max(take, notTake);
  }

  int longestIdealString(string s, int k)
  {
    vector<vector<int>> dp(s.size(), vector(27, -1));
    return solve(s, s.size(), k, 0, '{', dp);
  }
};