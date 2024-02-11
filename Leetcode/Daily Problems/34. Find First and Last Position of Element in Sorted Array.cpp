// 34. Find First and Last Position of Element in Sorted Array

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]

// Constraints:

// 0 <= nums.length <= 105
// -109 <= nums[i] <= 109
// nums is a non-decreasing array.
// -109 <= target <= 109

class Solution
{
public:
  vector<int> searchRange(vector<int> &nums, int target)
  {
    vector<int> v;
    vector<int>::iterator start = lower_bound(nums.begin(), nums.end(), target);
    vector<int>::iterator end = upper_bound(nums.begin(), nums.end(), target);
    if (!nums.size() || start == nums.end() || (start != nums.end() && *start != target))
    {
      v.insert(v.end(), {-1, -1});
      return v;
    }
    v.insert(v.end(), {(int)(start - nums.begin()), (int)(end - nums.begin() - 1)});
    return v;
  }
};