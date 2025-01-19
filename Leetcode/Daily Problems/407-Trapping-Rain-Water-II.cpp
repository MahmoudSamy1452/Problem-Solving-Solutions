class Solution {
    vector<vector<int>> dirs{{0,1}, {0, -1}, {1, 0}, {-1, 0}};
    struct Cell {
        int row;
        int col;
        int height;
        
        Cell(int height, int row, int col): height(height), row(row), col(col) {}

        bool operator<(const Cell& other) const {
            return height >= other.height;
        }
    };

    vector<int> dirx{0, 0, 1, -1}, diry{1, -1, 0, 0};

    bool isValid(int r, int c , int m, int n) {
        return r >= 0 && r < m && c >= 0 && c < n;
    };
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int m = heightMap.size(), n = heightMap[0].size(), ans = 0, neighbor_r, neighbor_c;
        priority_queue<Cell> pq;
        vector<vector<bool>> visited(m, vector<bool>(n));

        for(int i = 0; i < m; i++) {
            visited[i][0] = true;
            pq.push(Cell(heightMap[i][0], i, 0));

            visited[i][n - 1] = true;
            pq.push(Cell(heightMap[i][n - 1], i, n - 1));
        }

        for(int j = 1; j < n - 1; j++) {
            visited[0][j] = true;
            pq.push(Cell(heightMap[0][j], 0, j));

            visited[m - 1][j] = true;
            pq.push(Cell(heightMap[m - 1][j], m - 1, j));
        }

        while(!pq.empty()) {
            auto cur = pq.top(); pq.pop();
            for(int i = 0; i < 4; i++) {
                auto dir = dirs[i];
                neighbor_r = cur.row + dir[0];
                neighbor_c = cur.col + dir[1];
                if(isValid(neighbor_r, neighbor_c, m, n) && !visited[neighbor_r][neighbor_c]) {
                    visited[neighbor_r][neighbor_c] = true;
                    pq.push(Cell(max(heightMap[neighbor_r][neighbor_c], cur.height), neighbor_r, neighbor_c));
                    ans += max(cur.height - heightMap[neighbor_r][neighbor_c], 0);
                }
            }
        }
        return ans;
    }
};