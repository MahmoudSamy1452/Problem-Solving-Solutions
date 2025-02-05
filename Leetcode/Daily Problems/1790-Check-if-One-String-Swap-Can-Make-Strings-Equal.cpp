class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size(), i1 = -1, cnt = 0;
        if(n1 != n2) return false;
        for(int i = 0; i < n1; i++) {
            if(s1[i] != s2[i]) {
                cnt++;
                if(cnt > 2) return false;
                if(i1 == -1) i1 = i;
                else {
                    if(s1[i] != s2[i1] || s1[i1] != s2[i]) return false;
                }
            }
        }
        return cnt == 0 || cnt == 2;
    }
};