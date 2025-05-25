class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int foundDoubleLetter = 0; int ans = 0;
        unordered_map<string, int> mp;
        for(string& word: words) {
            char c0 = word[0], c1 = word[1];
            bool doubleLetter = c0 == c1;
            if(mp[string(1, c1) + c0]) {
                ans += 1;
                mp[string(1, c1) + c0]--;
                if(doubleLetter) foundDoubleLetter--;
            } else {
                mp[word]++;
                if(doubleLetter) foundDoubleLetter++;
            } 
        }
        return ans * 4 + (foundDoubleLetter>0) * 2;
    }
};