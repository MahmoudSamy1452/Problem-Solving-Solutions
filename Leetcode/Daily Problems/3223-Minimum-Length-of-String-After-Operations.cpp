class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        vector<int> cnt(26, 0);
        for(int i = 0; i < n; i++) {
            cnt[s[i]-'a']++;
        }
        int ans = 0;
        for(int& f: cnt) {
            if(f == 0) continue;
            if(f % 2) ans += 1;
            else ans += 2; 
        }
        return ans;
    }
};