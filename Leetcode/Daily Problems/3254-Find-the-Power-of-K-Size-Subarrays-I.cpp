class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        if(k == 1) return nums;
        vector<int> ans; int n = nums.size();
        for(int i = 0; i <= n-k; i++) {
            for(int j = 1; j < k; j++) {
                if(nums[i + j] != nums[i +j-1]+1) {
                    ans.push_back(-1);
                    break;
                }
                if(j == k - 1) ans.push_back(nums[i + j]);
            }
        }
        return ans;
    }
};