class Solution {
    void debug(vector<long long>& dp) {
        for(long long& d: dp) cout << d << " ";
        cout << endl;
    }
public:
    long long mostPoints(vector<vector<int>>& questions) {
        long long n = questions.size();
        vector<long long> dp(n, -1), postfix_mx(n, -1);
        for(int i = n - 1; i >= 0; i--) {
            int p = questions[i][0], bp = questions[i][1] + 1;
            if(bp + i >= n) dp[i] = p;
            else dp[i] = postfix_mx[bp + i] + p;
            postfix_mx[i] = i == n - 1 ? p : max(postfix_mx[i + 1], dp[i]);
        }

        return *max_element(dp.begin(), dp.end());
    }
};