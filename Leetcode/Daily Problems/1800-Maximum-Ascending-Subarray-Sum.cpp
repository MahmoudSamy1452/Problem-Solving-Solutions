class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size(), ans = nums[0], total = nums[0];
        for(int i = 1; i < n; i++) {
            if(nums[i - 1] < nums[i]) total += nums[i];
            else total = nums[i];
            ans = max(ans, total);
        }

        return ans;
    }
};