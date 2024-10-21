class Solution {
    int rec(string s, unordered_set<string>& st) {
        if (s.size() == 0) return 0;
        int mx = 0; string temp;
        for(int i = 0; i < s.size(); i++) {
            temp += s[i];
            if(st.find(temp) == st.end()) {
                st.insert(temp);
                string rest = s.substr(i+1, s.size());
                mx = max(mx, 1 + rec(rest, st));
                st.erase(temp);
            }
        }
        cout << mx << " " << s << endl;
        return mx;
    }
public:
    int maxUniqueSplit(string s) {
        unordered_set<string> st;
        return rec(s, st);
    }
};