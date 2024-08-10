// 959. Regions Cut By Slashes

// An n x n grid is composed of 1 x 1 squares where each 1 x 1 square consists of a '/', '\', or blank space ' '. These characters divide the square into contiguous regions.

// Given the grid grid represented as a string array, return the number of regions.

// Note that backslash characters are escaped, so a '\' is represented as '\\'.

 

// Example 1:


// Input: grid = [" /","/ "]
// Output: 2
// Example 2:


// Input: grid = [" /","  "]
// Output: 1
// Example 3:


// Input: grid = ["/\\","\\/"]
// Output: 5
// Explanation: Recall that because \ characters are escaped, "\\/" refers to \/, and "/\\" refers to /\.
 

// Constraints:

// n == grid.length == grid[i].length
// 1 <= n <= 30
// grid[i][j] is either '/', '\', or ' '.

class Solution {
    const vector<vector<int>> DIRECTIONS = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool inBound(int row, int col, int n){
        return row >= 0 && row < n && col >= 0 && col < n;
    }
    void floodFill(vector<vector<int>>& expandedGrid, int row, int col) {
        if(!inBound(row, col, expandedGrid.size()) || expandedGrid[row][col])
            return;
        expandedGrid[row][col] = 1;
        for(int i = 0; i < 4; i++) {
            floodFill(expandedGrid, row + DIRECTIONS[i][0], col + DIRECTIONS[i][1]);
        }
    }
public:
    int regionsBySlashes(vector<string>& grid) {
        int n = grid.size();
        vector<vector<int>> expandedGrid(n * 3, vector<int>(n * 3, 0));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++) {
                int row = i * 3, col = j * 3;
                if(grid[i][j] == '/') {
                    expandedGrid[row][col + 2] = expandedGrid[row + 1][col + 1] = expandedGrid[row + 2][col] = 1;
                } else if(grid[i][j] == '\\') {
                    expandedGrid[row][col] = expandedGrid[row + 1][col + 1] = expandedGrid[row + 2][col + 2] = 1;
                }
            }
        }

        int regions = 0;
        for(int i = 0; i < n * 3; i++) {
            for(int j = 0; j < n * 3; j++) {
                if(expandedGrid[i][j] == 0) {
                    floodFill(expandedGrid, i, j);
                    regions++;
                }
            }
        }
        return regions;
    }
};