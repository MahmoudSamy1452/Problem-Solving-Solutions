class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mn = INT_MAX, ans = -1;
        for(int& num: nums) {
            if(num - mn > 0) ans = max(ans, num - mn);
            mn = min(mn, num);
        }
        return ans;
    }
};