class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<unordered_set<string>> s(n + 1);
        s[0] = {\\};
        for(int k = 1; k <= n; k++) {
            for (int i = 0; i < k; ++i) {
                for (const auto& left : s[i]) {
                    for (const auto& right : s[k - 1 - i]) {
                        s[k].insert(\(\ + left + \)\ + right);
                    }
                }
            }
        }
        return {s[n].begin(), s[n].end()};
    }
};