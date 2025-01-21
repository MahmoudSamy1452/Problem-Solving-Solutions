class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size(); long long ans = LONG_LONG_MAX;
        vector<long long> prefix(n + 1, 0), suffix(n + 1, 0);
        for(int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + grid[0][i - 1];
        }
        for(int i = n - 1; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + grid[1][i];
        }

        for(int i = 0; i < n; i++){
            ans = min(ans, max(suffix[0] - suffix[i], prefix.back() - prefix[i + 1]));
        }
        return ans;
    }
};