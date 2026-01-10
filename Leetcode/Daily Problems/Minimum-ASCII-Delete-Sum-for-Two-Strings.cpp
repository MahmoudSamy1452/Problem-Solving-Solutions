1class Solution {
2public:
3    int minimumDeleteSum(string s1, string s2) {
4        int m = s1.size(), n = s2.size();
5        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
6
7        for(int i = m - 1; i >= 0; i--) {
8            for(int j = n - 1; j >= 0; j--) {
9                if(s1[i] == s2[j]) dp[i][j] = s1[i] + dp[i + 1][j + 1];
10                else dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
11            }
12        }
13        
14        int total = 0;
15        for(char& c: s1+s2) total += c;
16        return total - 2 * dp[0][0];
17    }
18};