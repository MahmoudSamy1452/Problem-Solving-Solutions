class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        if(nums1.size() % 2) {
            for(int& num2: nums2) ans ^= num2;
        }
        if(nums2.size() % 2) {
            for(int& num1: nums1) ans ^= num1;
        }
        return ans;
    }
};