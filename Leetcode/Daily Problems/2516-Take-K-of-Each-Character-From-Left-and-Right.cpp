class Solution {
public:
    int takeCharacters(string s, int k) {
        if(!k) return 0;
        vector<int> cnt_l(3, 0), cnt_r(3, 0); int covered = 0;
        for(char& c: s) if(++cnt_l[c-'a'] == k) covered++;
        if(covered < 3) return -1;
        int n = s.size(), ans = n;
        for(int l = n - 1, r = n - 1; l >= 0; l--){
            if(--cnt_l[s[l]-'a'] == k - 1) covered--;
            while(covered < 3 && r >= l){
                if(++cnt_l[s[r--]-'a'] == k) covered++;
            }
            ans = min(ans, n - (r - l + 1));
        }
        return ans;
    }
};