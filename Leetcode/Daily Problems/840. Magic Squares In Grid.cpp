// 840. Magic Squares In Grid

// A 3 x 3 magic square is a 3 x 3 grid filled with distinct numbers from 1 to 9 such that each row, column, and both diagonals all have the same sum.

// Given a row x col grid of integers, how many 3 x 3 contiguous magic square subgrids are there?

// Note: while a magic square can only contain numbers from 1 to 9, grid may contain numbers up to 15.

// Example 1:

// Input: grid = [[4,3,8,4],[9,5,1,9],[2,7,6,2]]
// Output: 1
// Explanation: 
// The following subgrid is a 3 x 3 magic square:

// while this one is not:

// In total, there is only one magic square inside the given grid.
// Example 2:

// Input: grid = [[8]]
// Output: 0
 
// Constraints:

// row == grid.length
// col == grid[i].length
// 1 <= row, col <= 10
// 0 <= grid[i][j] <= 15

class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int ans = 0, n = grid.size(), m = grid[0].size();
        for(int i = 0; i < n - 2; i++) {
            for(int j = 0; j < m - 2; j++) {
                unordered_set<int> s;
                bool isMagic = true;
                for(int k = i; k < i + 3; k++) {
                    if(!isMagic) break;
                    for(int l = j; l < j + 3; l++) {
                        if(grid[k][l] < 1 || grid[k][l] > 9) {
                            isMagic = false;
                            break;
                        }
                        s.insert(grid[k][l]);
                    }
                }

                if(s.size() != 9) isMagic = false;

                int diagonal1 =
                    grid[i][j] + grid[i + 1][j + 1] + grid[i + 2][j + 2];
                int diagonal2 =
                    grid[i + 2][j] + grid[i + 1][j + 1] + grid[i][j + 2];

                if (diagonal1 != diagonal2) isMagic = false;

                int row1 = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];
                int row2 = grid[i + 1][j] + grid[i + 1][j + 1] +
                        grid[i + 1][j + 2];
                int row3 = grid[i + 2][j] + grid[i + 2][j + 1] +
                        grid[i + 2][j + 2];

                if (!(row1 == diagonal1 && row2 == diagonal1 && row3 == diagonal1)) {
                    isMagic = false;
                }

                int col1 = grid[i][j] + grid[i + 1][j] + grid[i + 2][j];
                int col2 = grid[i][j + 1] + grid[i + 1][j + 1] +
                        grid[i + 2][j + 1];
                int col3 = grid[i][j + 2] + grid[i + 1][j + 2] +
                        grid[i + 2][j + 2];

                if (!(col1 == diagonal1 && col2 == diagonal1 && col3 == diagonal1)) {
                    isMagic = false;
                }
                ans += isMagic;
            }
        }
        return ans;
    }
};
