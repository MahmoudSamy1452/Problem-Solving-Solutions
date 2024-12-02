class Solution {
    bool isPrefix(string word, string searchWord) {
        if(word.size() < searchWord.size()) return false;
        string prefix;
        for(int i = 0; i < searchWord.size(); i++) prefix += word[i];
        return prefix == searchWord;
    }
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word; int i = 1;
        while(ss >> word) {
            if(isPrefix(word, searchWord)) return i;
            i++;
        }
        return -1;
    }
};