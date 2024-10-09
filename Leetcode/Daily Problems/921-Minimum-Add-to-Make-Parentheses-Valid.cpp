class Solution {
    vector<pair<int, int>> dir{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    bool inBound(int rows, int cols, int x, int y) {
        return x >= 0 && x < rows && y >= 0 && y < cols;
    }
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        int covered = 0, steps = 0;
        pair<int, int> pos{rStart, cStart};

        while(covered < rows*cols) {
            for(int i = 0; i < steps/2 + 1; i++) {
                cout << pos.first << \ \ << pos.second << endl;
                if(inBound(rows, cols, pos.first, pos.second)){
                    covered++;
                    ans.push_back({pos.first, pos.second});
                }
                pos.first += dir[steps%4].first;
                pos.second += dir[steps%4].second;
            }
            steps++;
        }
        return ans;
    }
};