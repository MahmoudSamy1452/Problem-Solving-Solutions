class Solution {
public:
    bool isPalindrome(string s) {
        string preprocessedString;
        for(int i = 0; i < s.size(); i++) {
            if(tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z' || s[i] >= '0' && s[i] <= '9') preprocessedString += tolower(s[i]);
        }
        int i = 0, j = preprocessedString.size() - 1;
        cout << preprocessedString << endl;
        while(i < j) {
            if(preprocessedString[i] != preprocessedString[j])  return false;
            i++; j--;
        }
        return true;
    }
};