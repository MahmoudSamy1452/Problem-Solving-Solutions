class Solution {
public:
    int numDistinct(string s, string t) {
        unordered_map<char, vector<int>> char2idx; unordered_map<string, unsigned long long> suffixCnt; suffixCnt[\\] = 1;
        for(int i = 0; i < t.size(); i++) {
            if(find(s.begin(), s.end(), t[i]) == s.end()) return 0;
            char2idx[t[i]].push_back(i);
        }
        for(int i = s.size() - 1; i >= 0; i--) {
            if(char2idx.find(s[i]) == char2idx.end()) continue;
            for(int idx: char2idx[s[i]]) {
                suffixCnt[t.substr(idx, t.size() - idx)] += suffixCnt[t.substr(idx + 1, t.size() - idx - 1)];
            }
        }
        return suffixCnt[t];
    }
};