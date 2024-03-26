// 41. First Missing Positive

// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

// You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

// Example 1:

// Input: nums = [1,2,0]
// Output: 3
// Explanation: The numbers in the range [1,2] are all in the array.
// Example 2:

// Input: nums = [3,4,-1,1]
// Output: 2
// Explanation: 1 is in the array but 2 is missing.
// Example 3:

// Input: nums = [7,8,9,11,12]
// Output: 1
// Explanation: The smallest positive integer 1 is missing.

// Constraints:

// 1 <= nums.length <= 1e5
// -2^31 <= nums[i] <= 2^31 - 1

class Solution
{
public:
  int firstMissingPositive(vector<int> &nums)
  {
    int n = nums.size();
    for (int &num : nums)
      if (num <= 0 || num > n)
        num = n + 1;

    for (int &num : nums)
    {
      if (abs(num) == n + 1)
        continue;
      nums[abs(num) - 1] = abs(nums[abs(num) - 1]) * -1;
    }

    for (int i = 0; i < n; i++)
    {
      if (nums[i] > 0)
        return i + 1;
    }
    return n + 1;
  }
};