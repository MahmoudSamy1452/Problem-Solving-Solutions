class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int> v{nums.begin(), nums.end()};
        int op = 0, n = nums.size();
        for(int i = 0; i < n - 2; i++) {
            if(nums[i] == 0) {
                op++; nums[i + 1] = !nums[i + 1];
                nums[i + 2] = !nums[i + 2];
            }
        }
        if(nums[n - 2] && nums[n - 1]) return op;
        return -1;
    }
};