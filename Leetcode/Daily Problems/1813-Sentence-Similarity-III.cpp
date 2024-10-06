class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        stringstream ss1(sentence1), ss2(sentence2);
        string word;
        vector<string> s1Words, s2Words;
        while (ss1 >> word) s1Words.push_back(word);
        while (ss2 >> word) s2Words.push_back(word);
        int n = s1Words.size(), m = s2Words.size(), i = 0, j = n - 1, k = m - 1;
        while(i < min(n, m) && s1Words[i] == s2Words[i] ) i++;
        while(j >= 0 && k >= 0 && s1Words[j] == s2Words[k]) {j--;k--;}
        if(j < i || k < i) return true;
        return false;
    }
};