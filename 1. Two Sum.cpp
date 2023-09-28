// 1. Two Sum
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

// First Approach: Hash Table

// Two-pass
class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    map<int, vector<int>> mp;
    for (int i = 0; i < nums.size(); i++)
    {
      mp[nums[i]].push_back(i);
    }
    for (int i = 0; i < nums.size(); i++)
    {
      if (mp.find(target - nums[i]) != mp.end() && !(nums[i] * 2 == target && mp[nums[i]].size() == 1))
      {
        vector<int> v{i, mp[target - nums[i]].back()};
        return v;
      }
    }
    return vector<int>();
  }
};

// One-pass
class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    map<int, vector<int>> mp;
    for (int i = 0; i < nums.size(); i++)
    {
      mp[nums[i]].push_back(i);
      if (mp.find(target - nums[i]) != mp.end() && !(nums[i] * 2 == target && mp[nums[i]].size() == 1))
      {
        vector<int> v{mp[nums[i]].front(), mp[target - nums[i]].back()};
        return v;
      }
    }
    return vector<int>();
  }
};

// Second Approach: Two pointers

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    vector<pair<int, int>> vp;
    for (int i = 0; i < nums.size(); i++)
      vp.push_back(make_pair(nums[i], i));
    sort(vp.begin(), vp.end());
    int i = 0, j = vp.size() - 1;
    while (i < j)
    {
      if (target - vp[i].first < vp[j].first)
      {
        j--;
      }
      else if (target - vp[i].first > vp[j].first)
      {
        i++;
      }
      else
      {
        vector<int> ans{vp[i].second, vp[j].second};
        return ans;
      }
    }
    return vector<int>();
  }
};