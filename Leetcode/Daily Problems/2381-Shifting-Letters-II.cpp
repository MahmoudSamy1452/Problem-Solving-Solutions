class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> v(n + 1, 0);
        for(auto& shift: shifts) {
            int start = shift[0], end = shift[1] + 1, dir = shift[2];
            dir = dir * 2 - 1;
            v[start] += dir; v[end] -= dir;
        }
        for(int i = 1; i < n; i++) v[i] += v[i-1];

        string ans = "";
        for(int i = 0; i < n; i++) {
            int offset = s[i]-'a';
            offset += v[i];
            offset %= 26;
            if(offset < 0) offset += 26;
            ans += (char)('a' + offset);
        }

        return ans;
    }
};