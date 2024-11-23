class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size(), n = box[0].size(), top;
        vector<vector<char>> rotatedBox(n, vector<char>(m));
        for(int j = m - 1, oldI = 0; j >= 0 && oldI < m; j--, oldI++) {
            top = n - 1;
            for(int i = n - 1, oldJ =  n - 1; i >= 0 && oldJ >= 0; i--, oldJ--) {
                rotatedBox[i][j] = box[oldI][oldJ];
                if(box[oldI][oldJ] == '#') {
                    rotatedBox[i][j] = '.';
                    rotatedBox[top][j] = '#';
                    top--;
                }
                if(rotatedBox[i][j] != '.') top = i - 1;
            }
        }
        return rotatedBox;
    }
};