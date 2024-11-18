class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
      int n = code.size(), d = k > 0, window_sum = 0;
      vector<int> sum(n, 0);
      if(k == 0) return sum;
      k = abs(k);
      int l, r;
      if(d){
        l = 1; r = (k+1)%n;
      } else {
        l = n - k; r = 0;
      }
      for(int i = l; i < l + k; i++){
        window_sum += code[i%n];
      }
      for(int i = 0; i < sum.size(); i++){
        sum[i] = window_sum;
        window_sum = window_sum - code[l] + code[r];
        l = (l + 1) % n; r = (r + 1) % n;
      }
      return sum;
    }
};