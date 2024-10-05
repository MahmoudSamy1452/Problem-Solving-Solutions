class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mp, mp1;
        int n = s1.length(), m = s2.length();

        for(char& c: s1) {
            mp[c]++;
        }

        mp1 = mp;
        for(int i = 0; i <= m - n; i++) {
            for(int j = i; j < i + n; j++) {
                if(!mp1[s2[j]]) {
                    mp1 = mp;
                    break;
                } else mp1[s2[j]]--;
                if(j == i + n - 1) return true;
            }
        }

        return false;
    }
};