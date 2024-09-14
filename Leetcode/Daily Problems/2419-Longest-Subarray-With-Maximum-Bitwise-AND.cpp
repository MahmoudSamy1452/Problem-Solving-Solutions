class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size(), mx = INT_MIN, cnt = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] > mx) {
                mx = nums[i];
                cnt = 0;
                ans = 0;
            }
            if(nums[i] == mx) {
                cnt++;
                ans = max(ans, cnt);
            } else cnt = 0;
        }
        return ans;
    }
};