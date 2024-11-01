class Solution {
public:
    string makeFancyString(string s) {
        int c = 1, n = s.size();
        string ans; ans += s[0];
        for(int i= 1; i < n; i++) {
            if(s[i] != s[i-1]) {
                c = 1;
            } else c++;
            if(c < 3) ans += s[i];
        }
        return ans;
    }
};