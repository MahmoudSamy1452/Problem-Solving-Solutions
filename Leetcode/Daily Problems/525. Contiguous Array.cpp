// 525. Contiguous Array

// Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.

// Example 1:

// Input: nums = [0,1]
// Output: 2
// Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.
// Example 2:

// Input: nums = [0,1,0]
// Output: 2
// Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.

// Constraints:

// 1 <= nums.length <= 1e5
// nums[i] is either 0 or 1.

class Solution
{
public:
  int findMaxLength(vector<int> &nums)
  {
    unordered_map<int, int> m;
    int c = 0, n = nums.size(), ans = 0;
    m[c] = -1;
    for (int i = 0; i < n; i++)
    {
      if (nums[i])
        c++;
      else
        c--;
      if (!m.count(c))
      {
        m[c] = i;
      }
      else
      {
        ans = max(ans, i - m[c]);
      }
    }
    return ans;
  }
};