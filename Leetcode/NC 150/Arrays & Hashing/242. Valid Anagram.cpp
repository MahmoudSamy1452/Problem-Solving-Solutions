// 242. Valid Anagram

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false

class Solution
{
public:
  bool isAnagram(string s, string t)
  {
    if (s.size() != t.size())
      return false;
    vector<int> freq(26, 0);
    for (char &c : s)
    {
      freq[c - 'a']++;
    }
    for (char &c : t)
    {
      if (!(freq[c - 'a']--))
        return false;
    }
    return true;
  }
};