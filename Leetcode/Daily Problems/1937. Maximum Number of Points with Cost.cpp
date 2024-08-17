// 1937. Maximum Number of Points with Cost

// You are given an m x n integer matrix points (0-indexed). Starting with 0 points, you want to maximize the number of points you can get from the matrix.

// To gain points, you must pick one cell in each row. Picking the cell at coordinates (r, c) will add points[r][c] to your score.

// However, you will lose points if you pick a cell too far from the cell that you picked in the previous row. For every two adjacent rows r and r + 1 (where 0 <= r < m - 1), picking cells at coordinates (r, c1) and (r + 1, c2) will subtract abs(c1 - c2) from your score.

// Return the maximum number of points you can achieve.

// abs(x) is defined as:

// x for x >= 0.
// -x for x < 0.

// Example 1:

// Input: points = [[1,2,3],[1,5,1],[3,1,1]]
// Output: 9
// Explanation:
// The blue cells denote the optimal cells to pick, which have coordinates (0, 2), (1, 1), and (2, 0).
// You add 3 + 5 + 3 = 11 to your score.
// However, you must subtract abs(2 - 1) + abs(1 - 0) = 2 from your score.
// Your final score is 11 - 2 = 9.
// Example 2:


// Input: points = [[1,5],[2,3],[4,2]]
// Output: 11
// Explanation:
// The blue cells denote the optimal cells to pick, which have coordinates (0, 1), (1, 1), and (2, 0).
// You add 5 + 3 + 4 = 12 to your score.
// However, you must subtract abs(1 - 1) + abs(1 - 0) = 1 from your score.
// Your final score is 12 - 1 = 11.
 
// Constraints:

// m == points.length
// n == points[r].length
// 1 <= m, n <= 1e5
// 1 <= m * n <= 1e5
// 0 <= points[r][c] <= 1e5

class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int n = points.size(), m = points[0].size();
        vector<vector<long long>> dp(n, vector<long long>(m));

        for(int j = 0; j < m; j++) {
            dp[0][j] = points[0][j];
        }

        for(int i = 1; i < n; i++) {
            vector<long long> leftMax(m), rightMax(m);

            leftMax[0] =  dp[i-1][0];
            for (int j = 1; j < m; ++j) {
                leftMax[j] = max(leftMax[j - 1] - 1,  dp[i-1][j]);
            }
            rightMax[m - 1] =  dp[i-1][m - 1];
            for (int j = m - 2; j >= 0; --j) {
                rightMax[j] = max(rightMax[j + 1] - 1, dp[i-1][j]);
            }
            for (int j = 0; j < m; ++j) {
                dp[i][j] = points[i][j] + max(leftMax[j], rightMax[j]);
            }
        }
        return *max_element(dp.back().begin(), dp.back().end());
    }
};
