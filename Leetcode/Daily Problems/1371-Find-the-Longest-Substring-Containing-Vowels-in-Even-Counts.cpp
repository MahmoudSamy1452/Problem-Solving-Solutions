class Solution {
public:
    int findTheLongestSubstring(string s) {
        int prefix = 0;
        vector<int> charmap(26, 0);
        charmap['a' - 'a'] = 1;
        charmap['e' - 'a'] = 2;
        charmap['i' - 'a'] = 4;
        charmap['o' - 'a'] = 8;
        charmap['u' - 'a'] = 16;

        vector<int> mp(32, -1);
        int ans = 0, n = s.length();
        for(int i = 0; i < n; i++) {
            prefix ^= charmap[s[i]-'a'];
            if (mp[prefix] == -1 and prefix != 0) mp[prefix] = i;
            ans = max(ans, i - mp[prefix]);
        }
        return ans;
    }
};