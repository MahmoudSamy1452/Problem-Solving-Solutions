class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int repeated, n = grid.size(), m = n * n + 1;
        vector<int> found(m, 0);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(++found[grid[i][j]] == 2) repeated = grid[i][j];
            }
        }

        for(int i = 1; i < m; i++){
            if(!found[i]) return {repeated, i};
        }
        return {};
    }
};