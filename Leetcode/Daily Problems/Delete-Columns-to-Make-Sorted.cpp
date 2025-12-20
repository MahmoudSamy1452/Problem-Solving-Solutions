1class Solution {
2public:
3    int minDeletionSize(vector<string>& strs) {
4        int cnt= 0;
5        for(int i = 0; i < strs[0].size(); i++) {
6            for(int j = 1; j < strs.size(); j++) {
7                if(strs[j][i] < strs[j-1][i]) {
8                    cnt++; break;
9                }
10            }
11        }
12        return cnt;
13    }
14};