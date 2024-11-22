class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int> mp; int m = matrix.size(), n = matrix[0].size(), max_cnt = 0;
        for(int i = 0; i < m; i++) {
            string pattern0 = "", pattern1 = "";
            for(int j = 0; j < n; j++) {
                if(matrix[i][j]) pattern1 += to_string(j);
                else pattern0 += to_string(j);
            }
            mp[pattern0]++; mp[pattern1]++;
            max_cnt = max({max_cnt, mp[pattern0], mp[pattern1]});
        }
        return max_cnt;
    }
};