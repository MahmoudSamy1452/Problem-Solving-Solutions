class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        
        vector<pair<int, int>> sorted;
        for(int i = 0; i < n; i++) {
            sorted.push_back({nums[i], i});
        }
        sort(sorted.begin(), sorted.end());

        vector<vector<int>> segments(1, vector<int>());
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) {
            if(!segments.back().size() || sorted[i].first - segments.back().back() <= limit) {
                segments.back().push_back(sorted[i].first);
            } else {
                segments.push_back({sorted[i].first});
            }
            mp[sorted[i].second] = segments.size() - 1;
        }

        vector<int> cnt(segments.size(), 0);
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            int segment_n = mp[i];
            ans.push_back(segments[segment_n][cnt[segment_n]++]);
        }
        return ans;
    }
};