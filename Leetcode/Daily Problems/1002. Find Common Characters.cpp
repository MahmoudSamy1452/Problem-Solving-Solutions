// 1002. Find Common Characters

// Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.

// Example 1:

// Input: words = ["bella","label","roller"]
// Output: ["e","l","l"]
// Example 2:

// Input: words = ["cool","lock","cook"]
// Output: ["c","o"]

// Constraints:

// 1 <= words.length <= 100
// 1 <= words[i].length <= 100
// words[i] consists of lowercase English letters.

class Solution
{
public:
  vector<string> commonChars(vector<string> &words)
  {
    int n = words.size();
    vector<vector<int>> freq(26, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
      for (char &c : words[i])
        freq[c - 'a'][i]++;

    vector<string> ans;
    for (int i = 0; i < 26; i++)
    {
      int mn = INT_MAX;
      for (int found : freq[i])
        mn = min(mn, found);
      while (mn--)
        ans.push_back(string(1, 'a' + i));
    }
    return ans;
  }
};