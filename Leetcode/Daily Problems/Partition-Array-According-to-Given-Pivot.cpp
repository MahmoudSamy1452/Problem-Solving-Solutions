class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> smaller, larger, ans; int pivotCnt = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] < pivot) smaller.push_back(nums[i]);
            else if(nums[i] > pivot) larger.push_back(nums[i]);
            else pivotCnt++;
        }

        for(int& num: smaller) ans.push_back(num);
        while(pivotCnt--) ans.push_back(pivot);
        for(int& num: larger) ans.push_back(num);

        return ans;
    }
};