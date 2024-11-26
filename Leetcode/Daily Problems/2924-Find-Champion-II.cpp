class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> loss(n);
        for(vector<int>& edge: edges) loss[edge[1]]++;
        int ans = -1;
        for(int i = 0; i < n; i++) {
            if(loss[i] == 0 && ans != -1) return -1;
            else if (loss[i] == 0) ans = i;
        }
        return ans;
    }
};