class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        int n = s.size(), skip = (numRows - 1) * 2, curSkip = skip;
        string ans;
        for(int row = 0; row < numRows; row++) {
            curSkip = skip - row * 2 == 0 ? skip : skip - row * 2;
            int i = row;
            while(i < n) {
                ans += s[i];
                i += curSkip;
                if(curSkip < skip) curSkip = skip - curSkip;
            }
        }
        return ans;
    }
};