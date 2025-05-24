class Solution {
public:
    string minWindow(string s, string t) {
        int nS = s.size(), nT = t.size(), found = 0, i = 0, j = 0, mxI = -1, mxJ = nS+1;
        unordered_map<char, int> tCnt, sCnt;

        for(auto& c: t) tCnt[c]++;

        for(int k = 0; k < nS; k++) {char c = s[k]; found += (sCnt[c]++ < tCnt[c] && tCnt[c]); }
        if(found != nT) return \\;
        sCnt.clear(); found = 0;

        while(i <= j && j <= nS) {
            if(found < nT) {
                char c = s[j++];
                found += (sCnt[c]++ < tCnt[c] && tCnt[c]);
            } else {
                if(mxJ-mxI > j-i) { mxI = i; mxJ = j; }
                char c = s[i++];
                found -= (sCnt[c]-- <= tCnt[c] && tCnt[c]);
            }
        }
        if(found == nT && mxJ-mxI > j-i) { mxI = i; mxJ = j; }
        if(mxI == -1) return \\;
        return s.substr(mxI, mxJ - mxI);
    }
};