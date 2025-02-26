class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size(), ans = 0, mn = 0, mx = 0;
        vector<int> prefixSum(n + 1, 0);

        for(int i = 1; i <= n; i++) {
            prefixSum[i] = prefixSum[i-1] + nums[i-1];
            mn = min(mn, prefixSum[i]); mx = max(mx, prefixSum[i]);
            ans = max({ans, mx - mn});
        }
        return ans;
    }
};