// 131. Palindrome Partitioning

// Given a string s, partition s such that every
// substring
//  of the partition is a
// palindrome
// . Return all possible palindrome partitioning of s.

// Example 1:

// Input: s = "aab"
// Output: [["a","a","b"],["aa","b"]]
// Example 2:

// Input: s = "a"
// Output: [["a"]]

// Constraints:

// 1 <= s.length <= 16
// s contains only lowercase English letters.

class Solution
{
  vector<vector<string>> ans;
  vector<string> cur = vector<string>();
  bool isPalindrome(string s)
  {
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
      if (s[i++] != s[j--])
        return false;
    }
    return true;
  }

  void backtrack(string s, int i = 0)
  {
    int n = s.size();
    for (int j = i; j < n; j++)
    {
      string part = s.substr(i, j - i + 1);
      if (isPalindrome(part))
      {
        cur.push_back(part);
        backtrack(s, j + 1);
        if (j == n - 1)
          ans.push_back(cur);
        cur.pop_back();
      }
    }
  }

public:
  vector<vector<string>> partition(string s)
  {
    backtrack(s);
    return ans;
  }
};