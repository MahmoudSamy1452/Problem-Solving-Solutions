// 368. Largest Divisible Subset

// Given a set of distinct positive integers nums, return the largest subset answer such that every pair (answer[i], answer[j]) of elements in this subset satisfies:

// answer[i] % answer[j] == 0, or
// answer[j] % answer[i] == 0
// If there are multiple solutions, return any of them.

// Example 1:

// Input: nums = [1,2,3]
// Output: [1,2]
// Explanation: [1,3] is also accepted.
// Example 2:

// Input: nums = [1,2,4,8]
// Output: [1,2,4,8]

// Constraints:

// 1 <= nums.length <= 1000
// 1 <= nums[i] <= 2 * 109
// All the integers in nums are unique.

class Solution
{
public:
  vector<int> largestDivisibleSubset(vector<int> &nums)
  {
    int mx_i = 0, n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> dp(n, 1), prev(n, -1);
    for (int i = 1; i < n; i++)
    {
      for (int j = 0; j < i; j++)
      {
        if (dp[i] < 1 + dp[j] && (nums[i] % nums[j] == 0))
        {
          dp[i] = 1 + dp[j];
          prev[i] = j;
          mx_i = (dp[i] > dp[mx_i]) ? i : mx_i;
        }
      }
    }
    int i = mx_i;
    vector<int> ans;
    while (i >= 0)
    {
      ans.push_back(nums[i]);
      i = prev[i];
    }
    return ans;
  }
};