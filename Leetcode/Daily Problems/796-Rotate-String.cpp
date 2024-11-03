class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        goal += goal;
        for(int i = 0; i < goal.size(); i++) {
            if(goal.substr(i, s.size()) == s) return true;
        }
        return false;
    }
};