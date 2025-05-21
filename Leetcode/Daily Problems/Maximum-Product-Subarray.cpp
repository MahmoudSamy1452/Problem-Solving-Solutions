class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long maxProd = nums[0], minProd = nums[0], ans = nums[0];

        for (int i = 1; i < n; ++i) {
            long long curr = nums[i];
            if (curr < 0) swap(maxProd, minProd);
            maxProd = max(curr, maxProd * curr);
            minProd = min(curr, minProd * curr);
            ans = max(ans, maxProd);
        }
        return ans;
    }
};
