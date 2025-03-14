class Solution {
    bool divisible(vector<int>& candies, long long k, int div) {
        if(!div) return true;
        for(int& pile: candies) {
            k -= pile/div;
            if(k <= 0) return true;
        }
        return false;
    }
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int left = 0, right = INT_MAX;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(divisible(candies, k, mid)) left = mid + 1;
            else right = mid - 1;
        }
        return right;
    }
};