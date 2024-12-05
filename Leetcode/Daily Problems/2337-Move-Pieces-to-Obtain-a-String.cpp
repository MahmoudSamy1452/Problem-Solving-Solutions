class Solution {
public:
    bool canChange(string start, string target) {
        int cntR = 0, cntL = 0, n = start.size();
        for(int i = 0; i < n; i++){
            cntR += (start[i] == 'R') - (target[i] == 'R');
            cntL += (start[i] == 'L') - (target[i] == 'L');
        }
        if(cntR || cntL) return false;

        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(start[i] == 'R') cnt++;
            else if(start[i] == 'L' && cnt) return false;
            if(target[i] == 'R') cnt--;
            else if(target[i] == 'L' && cnt) return false;
            if(cnt < 0) return false;
        }

        cnt = 0;
        for(int i = n-1; i >= 0; i--) {
            if(start[i] == 'L') cnt++;
            else if(start[i] == 'R' && cnt) return false; 
            if(target[i] == 'L') cnt--;
            else if(target[i] == 'R' && cnt) return false; 
            if(cnt < 0) return false;
        }

        return true;
    }
};