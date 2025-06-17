class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int total = 0, n = nums.size(), i = 0, j = 0, minLen = n + 1;
        while(j < n || total >= target) {
            if(total < target) total += nums[j++];
            else {
                minLen = min(minLen, j - i);
                total -= nums[i++];
            }
        }
        return minLen == n + 1 ? 0 : minLen;
    }
};