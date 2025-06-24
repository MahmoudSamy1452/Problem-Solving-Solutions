class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> s; int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] != key) continue;
            for(int j = max(0, i-k); j < min(n, i+k+1); j++) {
                s.insert(j);
            }
        }
        return vector<int>(s.begin(), s.end());
    }
};