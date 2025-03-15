class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int left = 0, right = *max_element(nums.begin(), nums.end()), n = nums.size();
        while(left <= right) {
            int mid = left + (right - left)/2;
            int thefts =  0;
            for(int i = 0; i < n; i++) {
                if(nums[i] <= mid) {
                    thefts++;
                    i++;
                }
            }
            if(thefts >= k) right = mid - 1;
            else left = mid + 1;
        }
        return left;
    }
};