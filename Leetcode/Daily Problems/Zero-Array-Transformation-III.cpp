class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
      sort(queries.begin(), queries.end(), [](const auto& a, const auto& b) {
        return a[0] < b[0];
      });

      priority_queue<vector<int>> heap;

      int used = 0, j = 0, curr = 0;
      vector<int> diff(nums.size() + 1, 0);
      for(int i = 0; i < nums.size(); i++) {
        curr += diff[i];
        while(j < queries.size() && queries[j][0] <= i) {heap.push({queries[j][1], queries[j][0]}); j++;}
        while(!heap.empty() && curr < nums[i]) {
            auto q = heap.top(); heap.pop();
            int l = q[1], r = q[0];
            if(r < i) break; 
            curr++; diff[r+1]--;
            used++;
        }
        if(curr < nums[i]) return -1;
      }
      return queries.size() - used;
    }
};