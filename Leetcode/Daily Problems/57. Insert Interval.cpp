// 57. Insert Interval

// You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

// Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).

// Return intervals after the insertion.

// Note that you don't need to modify intervals in-place. You can make a new array and return it.

// Example 1:

// Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
// Output: [[1,5],[6,9]]
// Example 2:

// Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
// Output: [[1,2],[3,10],[12,16]]
// Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].

// Constraints:

// 0 <= intervals.length <= 104
// intervals[i].length == 2
// 0 <= starti <= endi <= 1e5
// intervals is sorted by starti in ascending order.
// newInterval.length == 2
// 0 <= start <= end <=e105

class Solution
{
public:
  vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
  {
    int i = 0, n = intervals.size();
    vector<int> v(1e5 + 1, 0);
    vector<bool> b(1e5 + 1, false);
    for (vector<int> &interval : intervals)
    {
      v[interval[0]] += 1;
      v[interval[1]] += -1;
      b[interval[0]] = interval[0] == interval[1];
    }
    v[newInterval[0]] += 1;
    v[newInterval[1]] += -1;
    b[newInterval[0]] = newInterval[0] == newInterval[1];

    int cnt = 0, start = -1, end;
    vector<vector<int>> ans;
    for (int i = 0; i < v.size(); i++)
    {
      if (!cnt && v[i])
        start = i;
      cnt += v[i];
      if (!cnt && start != -1)
      {
        ans.push_back({start, i});
        b[i] = false;
        start = -1;
      }
      if (!cnt && start == -1 && b[i])
        ans.push_back({i, i});
    }
    return ans;
  }
};