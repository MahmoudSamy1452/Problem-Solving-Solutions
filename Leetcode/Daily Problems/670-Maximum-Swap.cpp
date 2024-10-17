class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num); int n = s.size();
        vector<int> maxRightIndex(n);
        maxRightIndex[n-1] = n-1;
        for(int i = n - 2; i >= 0; --i) {
            maxRightIndex[i] = (s[i] > s[maxRightIndex[i + 1]]) ? i : maxRightIndex[i + 1];
        }

        for(int i = 0; i < n; i++) { 
            if(s[i] < s[maxRightIndex[i]]) {
                swap(s[i], s[maxRightIndex[i]]);
                return stoi(s);
            }
        }

        return num;
    }
};