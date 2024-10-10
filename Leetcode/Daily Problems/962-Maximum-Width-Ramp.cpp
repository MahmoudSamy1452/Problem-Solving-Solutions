class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int> mxRIght(n);

        mxRIght[n - 1] = nums[n - 1];
        int mx = INT_MIN, mxi = -1;
        for(int i = n - 2; i >= 0; i--) {
            mxRIght[i] = max(mxRIght[i + 1], nums[i]);
        }

        int left = 0, right = 0, ans = 0;
        while(right < n) {
            while(nums[left] > mxRIght[right]) left++;
            ans = max(ans, right - left);
            right++;
        }

        return ans;
    }
};