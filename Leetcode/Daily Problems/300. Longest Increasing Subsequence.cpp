// 300. Longest Increasing Subsequence

// Given an integer array nums, return the length of the longest strictly increasing
// subsequence
// .

// Example 1:

// Input: nums = [10,9,2,5,3,7,101,18]
// Output: 4
// Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
// Example 2:

// Input: nums = [0,1,0,3,2,3]
// Output: 4
// Example 3:

// Input: nums = [7,7,7,7,7,7,7]
// Output: 1

// Constraints:

// 1 <= nums.length <= 2500
// -104 <= nums[i] <= 104

// Follow up: Can you come up with an algorithm that runs in O(n log(n)) time complexity?

class Solution
{
public:
  int lengthOfLIS(vector<int> &nums)
  {
    vector<int> s(nums.size(), 1);
    for (int i = 1; i < nums.size(); i++)
    {
      for (int j = 0; j < i; j++)
      {
        if (s[j] >= s[i] && nums[i] > nums[j])
        {
          s[i] = s[j] + 1;
        }
      }
    }
    int mx = INT_MIN;
    for (int j = 0; j < s.size(); j++)
    {
      mx = max(mx, s[j]);
    }
    return mx;
  }
};