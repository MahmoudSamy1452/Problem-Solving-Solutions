class Solution {
public:
    string clearDigits(string s) {
        stack<int> st;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= '0' && s[i] <= '9' && !st.empty()) st.pop();
            else st.push(s[i]);
        }
        string ans = "";
        while(!st.empty()) {
            ans += st.top(); st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};