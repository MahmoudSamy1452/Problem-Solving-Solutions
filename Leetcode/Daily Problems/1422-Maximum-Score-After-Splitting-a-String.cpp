class Solution {
public:
    int maxScore(string s) {
        vector<int> pre(s.size() + 1, 0), post(s.size() + 1, 0);
        for(int i = 1; i <= s.size(); i++) pre[i] = pre[i-1] + (s[i - 1] == '0');
        for(int i = s.size(); i > 0; i--) post[i-1] = post[i] + (s[i - 1] == '1');
        int ans = -1;
        for(int i = 1; i < s.size(); i++) ans = max(ans, pre[i] + post[i]);
        return ans;
    }
};