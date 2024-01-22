// 347. Top K Frequent Elements
// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

// Example 1:

// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]
// Example 2:

// Input: nums = [1], k = 1
// Output: [1]

class Solution
{
public:
  vector<int> topKFrequent(vector<int> &nums, int k)
  {
    unordered_map<int, int> mp;
    for (int num : nums)
    {
      mp[num]++;
    }
    map<int, vector<int>> s_mp;
    for (auto p : mp)
    {
      s_mp[p.second].push_back(p.first);
      cout << p.second << " " << p.first << endl;
    }
    vector<int> ans(k);
    for (auto it = s_mp.rbegin(); it != s_mp.rend() && k; it++)
    {
      cout << it->first << endl;
      for (auto e : it->second)
      {
        if (!(k--))
          break;
        ans[k] = e;
      }
    }
    return ans;
  }
};