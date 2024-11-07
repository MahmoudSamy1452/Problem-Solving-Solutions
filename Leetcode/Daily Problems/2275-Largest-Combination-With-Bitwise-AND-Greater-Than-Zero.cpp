class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int> cnt(100, 0);
        for(int& candidate: candidates){
            int i = 0;
            while((1 << i) <= candidate) {
                cnt[i] += ((candidate & (1 << i)) > 0);
                i++;
            }
        }
        return *max_element(cnt.begin(), cnt.end());
    }
};