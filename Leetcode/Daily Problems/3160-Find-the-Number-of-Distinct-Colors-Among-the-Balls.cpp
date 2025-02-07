class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> color, balls; int n = queries.size(), cnt = 0;
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            vector<int> query = queries[i];
            int ball = query[0], c = query[1];
            if(balls[ball] && --color[balls[ball]] == 0) cnt--;
            if(++color[c] == 1) cnt++;
            balls[ball] = c;
            ans[i] = cnt;
        }

        return ans;
    }
};