class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        vector<long long> prefix(n + 1, 0);

        for(int i = 1; i <= n; i++) prefix[i] = prefix[i - 1] + nums[i - 1];
        for(int i = 1; i < n; i++) ans += (prefix.back() - prefix[i] <= prefix[i]);

        return ans;
    }
};