class Solution {
    int rec(vector<int>& nums, int index, int bor, int mx) {
        if(index == nums.size()) return bor == mx;
        int cnt1 = rec(nums, index + 1, bor, mx);
        int cnt2 = rec(nums, index + 1, bor | nums[index], mx);
        return cnt1 + cnt2;
    }
public:  
    int countMaxOrSubsets(vector<int>& nums) {
        int mx = 0;
        for(int& num: nums) mx |= num;
        return rec(nums, 0, 0, mx);
    }
};