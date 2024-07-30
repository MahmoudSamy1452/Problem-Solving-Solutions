// 1653. Minimum Deletions to Make String Balanced

// You are given a string s consisting only of characters 'a' and 'b'​​​​.

// You can delete any number of characters in s to make s balanced. s is balanced if there is no pair of indices (i,j) such that i < j and s[i] = 'b' and s[j]= 'a'.

// Return the minimum number of deletions needed to make s balanced.

// Example 1:

// Input: s = "aababbab"
// Output: 2
// Explanation: You can either:
// Delete the characters at 0-indexed positions 2 and 6 ("aababbab" -> "aaabbb"), or
// Delete the characters at 0-indexed positions 3 and 6 ("aababbab" -> "aabbbb").
// Example 2:

// Input: s = "bbaaaaabb"
// Output: 2
// Explanation: The only solution is to delete the first two characters.
 
// Constraints:

// 1 <= s.length <= 1e5
// s[i] is 'a' or 'b'​​.

class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        vector<int> count_a(n), count_b(n);

        int a_count = 0;
        for(int i = n-1; i >= 0; i--) {
            count_a[i] += a_count;
            a_count += s[i] == 'a';
        }

        int b_count = 0;
        for(int i = 0; i < n; i++) {
            count_b[i] += b_count;
            b_count += s[i] == 'b';
        }

        int min_deletions = n;
        for(int i = 0; i < n; i++){
            min_deletions = min(min_deletions, count_a[i] + count_b[i]);
        }

        return min_deletions;
    }
};