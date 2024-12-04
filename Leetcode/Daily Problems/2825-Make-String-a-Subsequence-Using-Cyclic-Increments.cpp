class Solution {
    char incChar(char a){
        return a < 'z' ? a+1: 'a';
    }
public:
    bool canMakeSubsequence(string str1, string str2) {
        int ptr1 = 0, ptr2 = 0;
        while(ptr1 < str1.size() && ptr2 < str2.size()){
            if(str1[ptr1] == str2[ptr2] || incChar(str1[ptr1]) == str2[ptr2])
                ptr2++;
            ptr1++;
        }
        return ptr2 == str2.size();
    }
};