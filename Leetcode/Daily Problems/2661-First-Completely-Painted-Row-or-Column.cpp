class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        unordered_map<int, pair<int, int>> mp;
        vector<int> row(m, 0), col(n, 0);

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                mp[mat[i][j]] = {i, j};
            }
        }

        for(int i = 0; i < arr.size(); i++){
            pair<int, int> coord = mp[arr[i]];
            if(++row[coord.first] == n) return i;
            if(++col[coord.second] == m) return i;
        }

        return -1;
    }
};