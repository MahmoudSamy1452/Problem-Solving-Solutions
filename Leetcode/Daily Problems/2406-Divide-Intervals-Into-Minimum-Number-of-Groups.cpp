class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<pair<int, int>> events;
        for (vector<int> interval : intervals) {
            events.push_back({interval[0], 1});
            events.push_back({interval[1] + 1, -1});
        }

        sort(events.begin(), events.end());

        int concurrentIntervals = 0;
        int maxConcurrentIntervals = 0;
        for (auto p : events) {
            concurrentIntervals += p.second;
            maxConcurrentIntervals =
                max(maxConcurrentIntervals, concurrentIntervals);
        }

        return maxConcurrentIntervals;
    }
};