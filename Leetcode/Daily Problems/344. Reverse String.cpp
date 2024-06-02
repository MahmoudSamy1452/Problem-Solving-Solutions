// 344. Reverse String

// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

// Constraints:

// 1 <= s.length <= 1e5
// s[i] is a printable ascii character.

class Solution
{
public:
  void reverseString(vector<char> &s)
  {
    // reverse(s.begin(), s.end());
    int i = 0, j = s.size() - 1, temp;
    while (i < j)
    {
      temp = s[i];
      s[i] = s[j];
      s[j] = temp;
      i++;
      j--;
    }
  }
};