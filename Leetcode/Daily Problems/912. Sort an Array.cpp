// 912. Sort an Array

// Given an array of integers nums, sort the array in ascending order and return it.

// You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

// Example 1:

// Input: nums = [5,2,3,1]
// Output: [1,2,3,5]
// Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).
// Example 2:

// Input: nums = [5,1,1,2,0,0]
// Output: [0,0,1,1,2,5]
// Explanation: Note that the values of nums are not necessairly unique.

// Constraints:

// 1 <= nums.length <= 5 * 1e4
// -5 * 1e4 <= nums[i] <= 5 * 1e4

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      map<int, int> mp;
      for(int num:nums){
          mp[num]++;
      }
      vector<int> res(nums.size());
      int j = 0;
      for(auto v:mp){
        for(int i = 0; i < v.second; i++)
            res[i+j] = v.first;
        j+=v.second;
      }
      return res;
    }
};