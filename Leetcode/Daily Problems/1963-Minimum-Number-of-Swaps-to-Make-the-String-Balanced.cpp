class Solution {
public:
    int minSwaps(string s) {
        int opening = 0, unbalanced = 0;
        for(int i = 0; i < s.size(); i++) {
            char c = s[i];

            if(c == '[') {
                opening++;
            } else {
                if(opening) opening--;
                else unbalanced++;
            }
        }
        return (unbalanced + 1) / 2;
    }
};