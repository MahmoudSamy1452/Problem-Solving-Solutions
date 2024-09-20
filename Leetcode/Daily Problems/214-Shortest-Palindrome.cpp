class Solution {
    vector<int> buildPrefixTable(const string& s) {
        vector<int> prefixTable(s.length(), 0);
        int length = 0;

        for (int i = 1; i < s.length(); i++) {
            while (length > 0 && s[i] != s[length]) {
                length = prefixTable[length - 1];
            }
            if (s[i] == s[length]) {
                length++;
            }
            prefixTable[i] = length;
        }
        return prefixTable;
    }
public:
    string shortestPalindrome(string s) {
        string reversed = string(s.rbegin(), s.rend());
        string combined = s + '#' + reversed;
        vector<int> prefixTable = buildPrefixTable(combined);
        int palindromeLength = prefixTable[combined.length() - 1];
        string suffix = reversed.substr(0, s.length() - palindromeLength);
        return suffix + s;
    }
    
};