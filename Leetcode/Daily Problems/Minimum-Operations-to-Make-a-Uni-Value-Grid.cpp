class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size(), n = grid[0].size(), rem = grid[0][0] % x;
        vector<int> numbers(m*n);
        for(int i = 0 ; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] % x != rem) return -1;
                numbers[i*n + j] = grid[i][j];
            }
        }

        sort(numbers.begin(), numbers.end());

        int goal = numbers[n*m/2], ans = 0;
        for(int i = 0; i < n*m; i++){
            ans += abs(goal - numbers[i])/x;
        }
        return ans;
    }
};