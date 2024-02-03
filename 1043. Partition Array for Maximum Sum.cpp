// 1043. Partition Array for Maximum Sum.cpp

// Given an integer array arr, partition the array into (contiguous) subarrays of length at most k. After partitioning, each subarray has their values changed to become the maximum value of that subarray.

// Return the largest sum of the given array after partitioning. Test cases are generated so that the answer fits in a 32-bit integer.

// Example 1:

// Input: arr = [1,15,7,9,2,5,10], k = 3
// Output: 84
// Explanation: arr becomes [15,15,15,9,10,10,10]
// Example 2:

// Input: arr = [1,4,1,5,7,3,6,1,9,9,3], k = 4
// Output: 83
// Example 3:

// Input: arr = [1], k = 1
// Output: 1

// Constraints:

// 1 <= arr.length <= 500
// 0 <= arr[i] <= 109
// 1 <= k <= arr.length

class Solution
{
public:
  int rec(vector<int> &arr, vector<int> &dp, int k, int i, int n)
  {
    if (i >= n)
      return 0;
    if (dp[i] != -1)
      return dp[i];
    int mx = -1, mx_e = -1;
    for (int j = i; j < min(i + k, n); j++)
    {
      mx_e = max(mx_e, arr[j]);
      mx = max(mx, rec(arr, dp, k, j + 1, n) + (j - i + 1) * mx_e);
    }
    return dp[i] = mx;
  }

  int maxSumAfterPartitioning(vector<int> &arr, int k)
  {
    int n = arr.size();
    vector<int> dp(n, -1);
    return rec(arr, dp, k, 0, n);
  }
};