class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size(); int dec = 0;
        for(int i = 0; i < n; i++) {
            dec += (nums[i] > nums[(i + 1) % n]);
        }
        return dec <= 1;
    }
};