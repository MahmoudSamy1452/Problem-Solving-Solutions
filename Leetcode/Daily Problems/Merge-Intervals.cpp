class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int> v(1e4 + 2); vector<bool> selfInterval(1e4 + 2, false);
        for(auto& interval: intervals) {
            int start = interval[0], end = interval[1];
            if(start == end) selfInterval[start] = true;
            v[start]++; v[end]--;
        }
        
        vector<vector<int>> ans;
        int start = -1, prefixSum = 0;
        for(int i = 0; i < 1e4 + 2; i++) {
            prefixSum += v[i];
            if(start == -1 && prefixSum > 0) start = i;
            if(selfInterval[i] && start == -1) ans.push_back({i, i});
            if(start != -1 && prefixSum == 0) {ans.push_back({start, i}); start = -1;}
        }
        return ans;
    }
};