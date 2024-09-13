class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> s;
        for(char c : allowed) s.insert(c);

        int n = words.size(), cnt = 0;
        for(int i = 0;  i < n; i++) {
            bool a = true;
            for(char c : words[i]) {
                if(s.find(c) == s.end()) {
                    a = false;
                    break;
                }
            }
            cnt += a;
        }

        return cnt;
    }
};