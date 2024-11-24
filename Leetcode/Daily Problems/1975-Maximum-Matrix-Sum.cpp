class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int mn = INT_MAX, cnt_neg = 0;
        for(vector<int>& row: matrix)
            for(int& element: row) {
                mn = min(mn, abs(element));
                sum += abs(element);
                cnt_neg += element < 0;
            }
        return cnt_neg % 2 ? sum - 2 * mn: sum;
    }
};