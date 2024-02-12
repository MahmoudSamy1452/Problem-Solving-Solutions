// 169. Majority Element

// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

// Constraints:

// n == nums.length
// 1 <= n <= 5 * 104
// -1e9 <= nums[i] <= 1e9

// Follow-up: Could you solve the problem in linear time and in O(1) space?

class Solution
{
public:
  int method1(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];
  }

  int method2(vector<int> &nums)
  {
    int n = nums.size();
    unordered_map<int, int> mp;
    for (int &num : nums)
    {
      if (++mp[num] > n / 2)
        return num;
    }
    return -1;
  }

  int method3(vector<int> &nums)
  {
    int count = 0, maxElement = 0;
    for (int &num : nums)
    {
      if (count == 0)
        maxElement = num;
      count += num == maxElement ? 1 : -1;
    }
    return maxElement;
  }

  int majorityElement(vector<int> &nums)
  {
    // return method1(nums);
    // return method2(nums);
    return method3(nums);
  }
};