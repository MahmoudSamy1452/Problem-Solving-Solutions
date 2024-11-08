class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n= nums.size(), nums_xor = 0;
        for(int& num : nums) nums_xor ^= num;

        int op = ((1 << maximumBit) - 1), k;
        vector<int> ans(n); 
        for(int i = n-1; i >= 0; i--){
            k = (nums_xor & op) ^ op;
            ans[n-1-i] = k;
            nums_xor ^= nums[i];
        }
        return ans;
    }
};