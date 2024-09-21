class Solution {
    void rec(vector<int>& ans, int n, int i) {
        if(i > n) return;
        ans.push_back(i);
        for(int j = 0; j < 10; j++) {
            rec(ans, n, i*10 + j);
        }
    }
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for(int i = 1; i < 10; i++) {
            rec(ans, n, i);
        }
        return ans;
    }
};