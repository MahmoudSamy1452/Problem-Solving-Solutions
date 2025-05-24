class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), maxBoundary = 0, ans = 0, cur = 0;
        for(int i = 0; i < n; i++) {
            cur += max(0, maxBoundary - height[i]);
            if(height[i] >= maxBoundary) {
                ans += cur; maxBoundary = height[i]; cur = 0;
            }
        }

        maxBoundary = 0; cur = 0;
        for(int i = n-1; i >= 0; i--) {
            cur += max(0, maxBoundary - height[i]);
            if(height[i] > maxBoundary) {
                ans += cur; maxBoundary = height[i]; cur = 0;
            }
        }
        return ans;
    }
};