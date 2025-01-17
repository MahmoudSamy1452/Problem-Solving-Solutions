class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        bool diff = false; int n = derived.size();
        for(int i = 0; i <= n-2; i++) {
            if(derived[i]) diff = !diff;
        }
        return diff == derived.back();
    }
};