class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<bool> rows(m, 1), cols(n, 1);
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(!matrix[i][j]) rows[i] = cols[j] = 0;
            }
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(!rows[i] || !cols[j]) matrix[i][j] = 0;
            }
        }
    }
};