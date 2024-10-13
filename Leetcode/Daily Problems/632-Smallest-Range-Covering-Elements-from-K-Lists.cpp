class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int, int>> vp;
        for(int i = 0; i < nums.size(); i++)
            for(int j = 0; j < nums[i].size(); j++) {
                vp.push_back({nums[i][j], i});
            }
        
        sort(vp.begin(), vp.end());

        unordered_map<int, int> mp;
        int i = 0, j = 0, covered = 0;
        vector<int> ans{0, INT_MAX};
        while(!(j == vp.size() && covered < nums.size())) {
            while(covered == nums.size()){
                if(ans[1] - ans[0] > vp[j - 1].first - vp[i].first)
                    ans = {vp[i].first, vp[j - 1].first};
                mp[vp[i].second]--;
                covered -= mp[vp[i].second] == 0;
                i++;
            }         
            while(covered < nums.size() && j < vp.size()) {
                mp[vp[j].second]++;
                covered += mp[vp[j].second] == 1;
                j++;
            }  
        }
        return ans;
    }
};