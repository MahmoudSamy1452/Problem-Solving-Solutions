class Solution {
public:
    string compressedString(string word) {
        string comp, scan; int n = word.size(), cnt = 1;
        for(int i = 1; i < n; i++) {
            if(word[i] == word[i - 1]) cnt++;
            else {
                comp += to_string(cnt) + word[i-1];
                cnt = 1;
            }
            if(cnt == 9) {
                comp +=  to_string(cnt) + word[i-1];
                cnt = 1; i++;
            }
            if(i >= n) cnt = 0;
        }

        if(cnt > 0) comp +=  to_string(cnt) + word.back();
        return comp;
    }
};