// 992. Subarrays with K Different Integers

// Given an integer array nums and an integer k, return the number of good subarrays of nums.

// A good array is an array where the number of different integers in that array is exactly k.

// For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.
// A subarray is a contiguous part of an array.

// Example 1:

// Input: nums = [1,2,1,2,3], k = 2
// Output: 7
// Explanation: Subarrays formed with exactly 2 different integers: [1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2]
// Example 2:

// Input: nums = [1,2,1,3,4], k = 3
// Output: 3
// Explanation: Subarrays formed with exactly 3 different integers: [1,2,1,3], [2,1,3], [1,3,4].

// Constraints:

// 1 <= nums.length <= 2 * 104
// 1 <= nums[i], k <= nums.length

class Solution
{
public:
  int util(vector<int> &nums, int k)
  {
    int i = 0, j = 0, ans = 0;
    unordered_map<int, int> mp;
    while (j < nums.size())
    {
      mp[nums[j]]++;
      while (mp.size() > k && i <= j)
      {
        mp[nums[i]]--;
        if (mp[nums[i]] == 0)
          mp.erase(nums[i]);
        i++;
      }
      ans += j - i + 1;
      j++;
    }
    return ans;
  }

  int subarraysWithKDistinct(vector<int> &nums, int k)
  {
    return util(nums, k) - util(nums, k - 1);
  }
};