class Solution {
public:
    int numberOfSubstrings(string s) {
        int i = 0, j = 0, n = s.size(), ans = 0;
        unordered_map<char, int> freq;

        while(j < n) {
            freq[s[j]]++;
            while(freq.size() == 3) {
                ans += n - j;
                freq[s[i]]--;
                if(freq[s[i]] == 0) freq.erase(s[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};