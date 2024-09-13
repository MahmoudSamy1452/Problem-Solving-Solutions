// 1568. Minimum Number of Days to Disconnect Island

// You are given an m x n binary grid grid where 1 represents land and 0 represents water. An island is a maximal 4-directionally (horizontal or vertical) connected group of 1's.

// The grid is said to be connected if we have exactly one island, otherwise is said disconnected.

// In one day, we are allowed to change any single land cell (1) into a water cell (0).

// Return the minimum number of days to disconnect the grid.

// Example 1:

// Input: grid = [[0,1,1,0],[0,1,1,0],[0,0,0,0]]

// Output: 2
// Explanation: We need at least 2 days to get a disconnected grid.
// Change land grid[1][1] and grid[0][2] to water and get 2 disconnected island.
// Example 2:

// Input: grid = [[1,1]]
// Output: 2
// Explanation: Grid of full water is also disconnected ([[1,1]] -> [[0,0]]), 0 islands.
 
// Constraints:

// m == grid.length
// n == grid[i].length
// 1 <= m, n <= 30
// grid[i][j] is either 0 or 1.

class Solution {

    const vector<vector<int>> DIRECTIONS{{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

    bool inBound(int r, int c, int n, int m) {
        return r >= 0 && c >= 0 && r < n && c < m;
    }

    void dfs(int r, int c, vector<vector<int>>& grid, vector<vector<bool>>& visited) {
        if(!inBound(r, c, grid.size(), grid[0].size()) || visited[r][c] || !grid[r][c])
            return;
        visited[r][c] = true;
        for(int i = 0; i < 4; i++) {
            dfs(r + DIRECTIONS[i][0], c + DIRECTIONS[i][1], grid, visited);
        }
    }

    int numOfIslands(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), count = 0;
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] && !visited[i][j]) {
                    count++;
                    dfs(i, j, grid, visited);
                }
            }
        }
        return count;
    }

public:
    int minDays(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();

        int islands = numOfIslands(grid);
        if(islands != 1) return 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) {
                if(!grid[i][j]) continue;
                grid[i][j] = 0;
                if(numOfIslands(grid) != 1) return 1;
                grid[i][j] = 1;
            }
        }

        return 2;
    }
};