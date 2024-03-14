// 930. Binary Subarrays With Sum

// Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.

// A subarray is a contiguous part of the array.

// Example 1:

// Input: nums = [1,0,1,0,1], goal = 2
// Output: 4
// Explanation: The 4 subarrays are bolded and underlined below:
// [1,0,1,0,1]
// [1,0,1,0,1]
// [1,0,1,0,1]
// [1,0,1,0,1]
// Example 2:

// Input: nums = [0,0,0,0,0], goal = 0
// Output: 15

// Constraints:

// 1 <= nums.length <= 3 * 104
// nums[i] is either 0 or 1.
// 0 <= goal <= nums.length

class Solution
{
public:
  int numSubarraysWithSum(vector<int> &nums, int goal)
  {
    int n = nums.size(), cnt = 0, sum = 0;
    unordered_map<int, int> f;
    for (int i = 0; i < n; i++)
    {
      sum += nums[i];
      cnt += sum == goal;
      cnt += f[sum - goal];
      f[sum]++;
    }
    return cnt;
  }
};
