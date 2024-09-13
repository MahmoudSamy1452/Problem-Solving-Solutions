class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> prefix(n + 1, 0);

        for(int i = 1; i < n + 1; i++){
            cout << prefix[i - 1] << " " << arr[i - 1] << endl;
            prefix[i] = prefix[i-1] ^ arr[i-1];
        }

        for(int i = 0; i < n + 1; i++)
         cout << prefix[i] << " ";

        int q = queries.size();
        vector<int> ans(q);
        for(int i = 0; i < q; i++){
            ans[i] = prefix[queries[i][1] + 1] ^ prefix[queries[i][0]];
        }
        return ans;
    }
};