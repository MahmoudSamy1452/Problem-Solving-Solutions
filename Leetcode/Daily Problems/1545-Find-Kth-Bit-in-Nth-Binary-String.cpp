class Solution {
    string rec(string s, int n) {
        if(!n) return s;
        string new_string = s + "1";
        for(int j = s.size() - 1; j >= 0; j--) {
            if(s[j] == '0') new_string += "1";
            else new_string += "0";
        }
        return rec(new_string, n-1);
    }
public:
    char findKthBit(int n, int k) {
        string s = "0";
        string ans = rec(s, n - 1);
        return ans[k - 1];
    }
};