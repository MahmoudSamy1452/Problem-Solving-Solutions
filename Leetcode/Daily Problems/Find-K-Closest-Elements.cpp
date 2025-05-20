class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int i = 0, j = 0, diff = 0, ans = INT_MAX; pair<int, int> p;
        for(; j < k; j++) diff += abs(arr[j] - x);
        ans = diff; p = {i, j};
        while(j < arr.size()) {
            diff -= abs(arr[i++] - x);
            diff += abs(arr[j++] - x);
            if(diff < ans) {
                ans = diff;
                p = {i, j};
            }
        }
        vector<int> v(k);
        for(int k = p.first; k < p.second; k++) {
            v[k-p.first] = arr[k];
        }
        return v;
    }
};