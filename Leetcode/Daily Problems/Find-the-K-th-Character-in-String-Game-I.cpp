class Solution {
    string cycleString(string original) {
        for(char& c: original) c = (((c - 'a') + 1) % 26) + 'a';
        return original;
    }
public:
    char kthCharacter(int k) {
        string word = "a";
        while(word.size() < k) word += cycleString(word);
        return word[k-1]; 
    }
};