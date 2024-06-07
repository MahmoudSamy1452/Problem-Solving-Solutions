// 648. Replace Words

// In English, we have a concept called root, which can be followed by some other word to form another longer word - let's call this word derivative. For example, when the root "help" is followed by the word "ful", we can form a derivative "helpful".

// Given a dictionary consisting of many roots and a sentence consisting of words separated by spaces, replace all the derivatives in the sentence with the root forming it. If a derivative can be replaced by more than one root, replace it with the root that has the shortest length.

// Return the sentence after the replacement.

 

// Example 1:

// Input: dictionary = ["cat","bat","rat"], sentence = "the cattle was rattled by the battery"
// Output: "the cat was rat by the bat"
// Example 2:

// Input: dictionary = ["a","b","c"], sentence = "aadsfasf absbs bbab cadsfafs"
// Output: "a a b c"
 

// Constraints:

// 1 <= dictionary.length <= 1000
// 1 <= dictionary[i].length <= 100
// dictionary[i] consists of only lower-case letters.
// 1 <= sentence.length <= 106
// sentence consists of only lower-case letters and spaces.
// The number of words in sentence is in the range [1, 1000]
// The length of each word in sentence is in the range [1, 1000]
// Every two consecutive words in sentence will be separated by exactly one space.
// sentence does not have leading or trailing spaces.

class Solution {

    struct TrieNode {
        vector<TrieNode*> children = vector<TrieNode*>(26, nullptr);
        bool end = false;
        TrieNode(){}
        TrieNode(bool end){
            this->end = end;
        }
    };

    void print_trie(TrieNode* root){
        bool leaf = true;
        for(int i = 0; i < 26; i++){
            if(root->children[i]){
                leaf = false;
                cout << string(1, i+'a');
                print_trie(root->children[i]);
            }
        }
        if(leaf) cout << endl;
    }
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        TrieNode* root = new TrieNode(), *ptr;
        for(string& s : dictionary){
            ptr = root;
            for(int i = 0; i < s.size(); i++){
                char c = s[i];
                if(!ptr->children[c-'a']) ptr->children[c-'a'] = new TrieNode(i == s.size()-1);
                ptr = ptr->children[c-'a'];
            }
            ptr->end = true;
        }

        istringstream iss(sentence);
        string word, ans, newWord;
        vector<string> words;
        while(iss >> word){
            words.push_back(word);
        }

        for(int i = 0; i < words.size(); i++){
            ptr = root;
            newWord = "";
            for(char& c : words[i]){
                ptr = ptr->children[c-'a'];
                newWord += string(1, c);
                if(!ptr) {newWord = words[i]; break;}
                if(ptr->end) break;
            }
            ans += newWord + (i != words.size() - 1 ? " " : "");
        }
        
        return ans;
    }
};