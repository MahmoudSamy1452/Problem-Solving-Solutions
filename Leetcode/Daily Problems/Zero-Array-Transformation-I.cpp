class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size(), n_q = queries.size(); vector<int> decrements(n, 0);
        for(int i = 0; i < n_q; i++) {
            vector<int> range = queries[i]; int l = range[0], r = range[1];
            decrements[l] += 1; if(r + 1 < n) decrements[r + 1] -= 1;
        }
        if(decrements[0] < nums[0]) return false;
        for(int i = 1; i < n; i++) {
            decrements[i] += decrements[i - 1];
             if(decrements[i] < nums[i]) return false;
        }
        return true;
    }
};