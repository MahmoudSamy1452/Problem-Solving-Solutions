class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.size(), ans = 0;
        for(string& word: words) ans += word.substr(0, n) == pref;
        return ans;
    }
};