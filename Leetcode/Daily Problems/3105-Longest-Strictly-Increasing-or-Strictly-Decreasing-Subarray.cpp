class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size(), ans = 1, cnt = 1, inc = nums[1] > nums[0];

        for(int i = 0; i < n - 1; i++) {
            if(nums[i + 1] > nums[i] && inc || nums[i + 1] < nums[i] && !inc) cnt++;
            else cnt = 1 + (nums[i + 1] != nums[i]);
            inc = nums[i + 1] > nums[i];
            ans = max(ans, cnt);
        }

        return ans;
    }
};