// 624. Maximum Distance in Arrays

// You are given m arrays, where each array is sorted in ascending order.

// You can pick up two integers from two different arrays (each array picks one) and calculate the distance. We define the distance between two integers a and b to be their absolute difference |a - b|.

// Return the maximum distance.

// Example 1:

// Input: arrays = [[1,2,3],[4,5],[1,2,3]]
// Output: 4
// Explanation: One way to reach the maximum distance 4 is to pick 1 in the first or third array and pick 5 in the second array.
// Example 2:

// Input: arrays = [[1],[1]]
// Output: 0

// Constraints:

// m == arrays.length
// 2 <= m <= 1e5
// 1 <= arrays[i].length <= 500
// -104 <= arrays[i][j] <= 104
// arrays[i] is sorted in ascending order.
// There will be at most 105 integers in all the arrays.

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mx_dist = 0, n = arrays.size(), mn_val = arrays[0][0], mx_val = arrays[0].back();
        for(int i = 1; i < n; i++) {
            vector<int> &array = arrays[i];
            mx_dist = max({mx_dist, array.back() - mn_val, mx_val - array[0]});
            mn_val = min(mn_val, array[0]);
            mx_val = max(mx_val, array.back());
        }
        return mx_dist;
    }
};