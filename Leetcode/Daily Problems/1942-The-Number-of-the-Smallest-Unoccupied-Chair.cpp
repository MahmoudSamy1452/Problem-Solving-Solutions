class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n = times.size();
        vector<int> chairs(n, -1);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> leaveQ;
        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++) {
            mp[times[i][0]] = i;
        }

        sort(times.begin(), times.end());

        int t = 0;
        for(int i = 0; i <= n; i++){
            t = times[i][0];
            while(!leaveQ.empty() && leaveQ.top().first <= t){
                auto leave = leaveQ.top();
                cout << leave.second << " leaving" << endl;
                auto x = find(chairs.begin(), chairs.end(), leave.second);
                *x = -1;
                leaveQ.pop();
            }
            int j = 0;
            while(chairs[j] != -1) j++;
            chairs[j] = i;
            if(mp[times[i][0]] == targetFriend) return j;
            leaveQ.push({times[i][1], i});
        }
        return -1;
    }
};