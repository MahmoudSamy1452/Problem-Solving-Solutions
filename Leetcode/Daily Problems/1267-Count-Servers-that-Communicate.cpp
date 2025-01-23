class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        map<int, int> rowC, colC;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j]) {
                    rowC[i]++; colC[j]++;
                }      
            }
        }

        int ans = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j]) ans += rowC[i] > 1 || colC[j] > 1;      
            }
        }

        return ans;
    }
};