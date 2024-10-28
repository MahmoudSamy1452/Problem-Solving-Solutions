class Solution {
    bool isSquare(int a, int b) {
        double mn = min(a, b), mx = max(a, b);
        return mx / mn == mn;
    }
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<int> uniqueElements(nums.begin(), nums.end());
        int ans = 1;
        for(int i = 2; i < 1000; i++) {
            int cnt = 0;
            long long x = i;
            while(x <= 1e5) {
                if(uniqueElements.count(x) == 1)
                    cnt++;
                else break;
                x *= x;
            }
            cout << cnt << endl;
            ans = max(cnt, ans);
        }

        return ans == 1 ? -1 : ans;
    }
};