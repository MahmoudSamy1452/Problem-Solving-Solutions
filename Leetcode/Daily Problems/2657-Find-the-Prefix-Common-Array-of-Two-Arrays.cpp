class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> a, b; int n = A.size();
        vector<int> ans(n, 0);
        for(int i = 0; i < n; i++) {
            a[A[i]]++; b[B[i]]++;
            if(i) ans[i] = ans[i - 1];
            if(A[i] == B[i] && a[A[i]] == 1 && b[B[i]] == 1) { ans[i]++; continue; }
            if(a[A[i]] == 1 && b[A[i]]) ans[i]++;
            if(b[B[i]] == 1 && a[B[i]]) ans[i]++;
        }
        return ans;
    }
};