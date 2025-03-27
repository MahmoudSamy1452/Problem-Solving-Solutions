class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> cnt1, cnt2;
        for(int& num: nums) {
            cnt2[num]++;
        }
        for(int i = 0; i < n - 1; i++) {
            int num = nums[i];
            cnt1[num]++; cnt2[num]--;
            if(cnt1[num] * 2 > i + 1 && cnt2[num] * 2 > n - i - 1) return i;
        }
        return -1;
    }
};