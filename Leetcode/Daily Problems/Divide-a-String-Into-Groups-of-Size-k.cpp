class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int i = 0; vector<string> ans;
        while(i < s.size()) {
            string group = string(k, fill);
            for(int j = 0; i + j < min(i + k, (int)s.size()); j++) {
                group[j] = s[i + j];
            }
            ans.push_back(group); i+=k;
        }
        return ans;
    }
};