class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> freq(501);
        for(int& e: arr) freq[e]++;
        for(int i = freq.size()-1; i > 0; i--) if(freq[i] ==  i) return i;
        return -1;
    }
};