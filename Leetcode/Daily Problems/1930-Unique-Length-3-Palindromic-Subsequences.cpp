class Solution {
public:
    int countPalindromicSubsequence(string s) {
        set<string> ans;
        for(int k = 0; k < 26; k++) {
            char c = 'a' + k;
            int i = 0, j = s.size() - 1;
            while(i < s.size() && s[i] != c) i++;
            while(j >= 0 && s[j] != c) j--;
            i++;
            for(; i < j; i++) {
                string sub({c, s[i], c});
                ans.insert(sub);
            }
        }
        return ans.size();
    }
};