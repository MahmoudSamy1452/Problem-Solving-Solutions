class Solution {
public:
    int minChanges(string s) {
        int cnt = 0, n = s.size();
        for(int i = 0; i < n/2; i++){
            cnt += (s[2*i] != s[2*i + 1]);
        }
        return cnt;
    }
};