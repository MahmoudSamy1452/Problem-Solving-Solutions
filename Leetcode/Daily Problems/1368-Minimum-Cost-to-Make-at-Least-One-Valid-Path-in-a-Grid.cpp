class Solution {
    vector<vector<int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool isValid(int x, int y, int m, int n){ return x >= 0 && x < m && y >= 0 && y < n; }
public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> v(m, vector<int>(n, INT_MAX));

        deque<pair<int, int>> deque;
        deque.push_front({0, 0});
        v[0][0] = 0;

        while (!deque.empty()) {
            auto [row, col] = deque.front();
            deque.pop_front();

            // Try all four directions
            for (int dir = 0; dir < 4; dir++) {
                int newRow = row + directions[dir][0];
                int newCol = col + directions[dir][1];
                int cost = (grid[row][col] != (dir + 1)) ? 1 : 0;

                // If position is valid and we found a better path
                if (isValid(newRow, newCol, m, n) &&
                    v[row][col] + cost < v[newRow][newCol]) {
                    v[newRow][newCol] = v[row][col] + cost;

                    // Add to back if cost=1, front if cost=0
                    if (cost == 1) {
                        deque.push_back({newRow, newCol});
                    } else {
                        deque.push_front({newRow, newCol});
                    }
                }
            }
        }
        return v[m-1][n-1];
    }
};