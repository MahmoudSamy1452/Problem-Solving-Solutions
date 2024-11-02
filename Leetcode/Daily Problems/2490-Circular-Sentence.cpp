class Solution {
    vector<string> split(string& str) {
        vector<string> tokens; stringstream ss(str);
        string token;

        while(getline(ss, token, ' '))
            tokens.push_back(token);

        return tokens;
    }
public:
    bool isCircularSentence(string sentence) {
        vector<string> words = split(sentence);

        int n = words.size();
        for(int i = 1; i < n; i++) {
            if(words[i - 1].back() != words[i].front()) return false;
        }
        
        return words.back().back() == words.front().front();
    }
};