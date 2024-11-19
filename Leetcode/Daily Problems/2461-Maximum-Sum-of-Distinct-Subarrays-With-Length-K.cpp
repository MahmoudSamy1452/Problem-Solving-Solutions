class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long n = nums.size(), sum = 0, ans = 0, dup = 0; unordered_map<int, int> mp;
        for(int i = 0; i < k; i++) {
            sum += nums[i];
            if(++mp[nums[i]] == 2) dup++;
        }
        if(!dup) ans = sum;
        int l = 0, r = k;
        while(r < n) {
            sum -= nums[l]; sum += nums[r];
            if(--mp[nums[l]] == 1) dup--;
            if(++mp[nums[r]] == 2) dup++;
            if(!dup) ans = max(ans, sum);
            l++; r++;
        }
        return ans;
    }
};