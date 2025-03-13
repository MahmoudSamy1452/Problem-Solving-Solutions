class Solution {
    bool canFormZeroArray(vector<int>& nums, vector<vector<int>>& queries, int k) {
        int n = nums.size(), sum = 0;
        vector<int> differenceArray(n + 1);

        for(int i = 0; i < k; i++) {
            int start = queries[i][0], end = queries[i][1], val = queries[i][2];
            differenceArray[start] += val;
            differenceArray[end + 1] -= val;
        }

        for(int i = 0; i < n; i++) {
            sum += differenceArray[i];
            if(sum < nums[i]) return false;
        }
        return true;
    }
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
       int n = nums.size(), left = 0, right = queries.size();
       if(!canFormZeroArray(nums, queries, right)) return -1;
       while(left <= right) {
            int mid = left + (right - left) / 2;
            if(canFormZeroArray(nums, queries, mid)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
       } 
       return left;
    }
};