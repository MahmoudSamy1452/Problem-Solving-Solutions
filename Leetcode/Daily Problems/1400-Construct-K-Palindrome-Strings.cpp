class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size(), cnt_odd = 0, cnt_even = 0;
        if(!n && !k) return true;
        if(!n) return false;
        unordered_map<char,int> mp;
        for(int i = 0; i < n; i++) {
            char c = s[i];
            mp[c]++;
            cnt_even += (mp[c] % 2) == 0;
            cnt_odd += ((mp[c] % 2) * 2) - 1;
        }
        return k >= cnt_odd && k <= cnt_odd + cnt_even * 2;
    }
};