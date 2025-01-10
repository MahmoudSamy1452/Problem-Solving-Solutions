class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
       unordered_map<char, int> mp; vector<string> ans;
       for(string& word: words2) {
        unordered_map<char, int> mp_word;
        for(char& c: word) {
            mp_word[c]++;
        }

        for(auto& p: mp_word) {
            mp[p.first] = max(mp[p.first], p.second);
        }
       }

       for(string& word: words1) {
        unordered_map<char, int> mp_word;
        for(char& c: word) {
            mp_word[c]++;
        }

        bool universal = true;
        for(auto& p: mp) {
            if(mp_word[p.first] < p.second) {
                universal = false; break;
            }
        }
        if(universal) ans.push_back(word);
       }
       return ans;
    }
};