class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i = 0, j = 0, n = blocks.size(), cnt = 0, ans;
        if(n < k) return -1;
        while(j < k) {
            cnt += blocks[j++] == 'W';
        }
        ans = cnt;
        while(j < n) {
            cnt -= blocks[i++] == 'W';
            cnt += blocks[j++] == 'W';
            ans = min(cnt, ans);
        }
        return ans;
    }
};