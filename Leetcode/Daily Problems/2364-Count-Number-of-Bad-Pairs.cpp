class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp; long long ans = 0;
        for(int i = 0; i < n; i++) {
            ans += i - mp[i-nums[i]];
            mp[i-nums[i]]++;
        }
        return ans;
    }
};