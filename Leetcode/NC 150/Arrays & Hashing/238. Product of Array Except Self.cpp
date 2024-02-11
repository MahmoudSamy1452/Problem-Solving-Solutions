// 238. Product of Array Except Self

// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

class Solution
{
public:
  vector<int> productExceptSelf(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> ans(n, 1);
    for (int i = 1; i < n; i++)
    {
      ans[i] *= ans[i - 1] * nums[i - 1];
    }
    int curr = 1;
    for (int i = n - 1; i >= 0; i--)
    {
      ans[i] *= curr;
      curr *= nums[i];
    }
    return ans;
  }
};