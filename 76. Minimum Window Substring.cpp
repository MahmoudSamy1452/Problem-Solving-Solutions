// 76. Minimum Window Substring

// Given two strings s and t of lengths m and n respectively, return the minimum window
// substring
//  of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

// The testcases will be generated such that the answer is unique.

// Example 1:

// Input: s = "ADOBECODEBANC", t = "ABC"
// Output: "BANC"
// Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
// Example 2:

// Input: s = "a", t = "a"
// Output: "a"
// Explanation: The entire string s is the minimum window.
// Example 3:

// Input: s = "a", t = "aa"
// Output: ""
// Explanation: Both 'a's from t must be included in the window.
// Since the largest window of s only has one 'a', return empty string.

// Constraints:

// m == s.length
// n == t.length
// 1 <= m, n <= 105
// s and t consist of uppercase and lowercase English letters.

class Solution
{
public:
  string minWindow(string s, string t)
  {
    unordered_map<char, int> mt;
    for (char &c : t)
      mt[c]++;
    int included = 0;
    int i = 0, j = 0;
    string ans = "";
    while (j <= s.size())
    {
      while (included < t.size() && j <= s.size())
      {
        if (mt.count(s[j]) && --mt[s[j]] >= 0)
          included++;
        j++;
      }
      while (included == t.size() && i < s.size())
      {
        if (mt.count(s[i]) && ++mt[s[i]] > 0)
          included--;
        i++;
      }
      if ((ans == "" || j - i + 1 < ans.size()) && included == t.size() - 1 && i)
      {
        ans = s.substr(i - 1, j - i + 1);
      }
    }
    return ans;
  }
};