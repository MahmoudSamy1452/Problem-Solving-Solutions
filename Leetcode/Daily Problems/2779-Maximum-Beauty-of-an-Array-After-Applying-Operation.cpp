class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0, j = 0, ans = 0;
        while(i <= j && j < nums.size()) {
            while(nums[j] - nums[i] > 2 * k) i++;
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};