class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans = INT_MAX, i = 0, j = 0, val = 0;
        vector<int> bitCnt(32, 0);
        while(j < nums.size()) {
            for(int l = 0; l < 32; l++) bitCnt[l] += (((1 << l) & nums[j]) > 0);
            val |= nums[j]; j++;
            while(val >= k && i < j) {
                ans = min(ans, j-i);
                for(int l = 0; l < 32; l++) {
                    if(((1 << l) & nums[i]) > 0){
                        bitCnt[l]--;
                        if(!bitCnt[l]) val -= (1 << l);
                    }
                }
                i++;
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};