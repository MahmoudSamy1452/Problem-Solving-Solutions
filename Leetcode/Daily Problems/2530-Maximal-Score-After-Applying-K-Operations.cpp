class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq; long long ans = 0;
        for(int i  = 0; i < nums.size(); i++) pq.push(nums[i]);
        while(k--) {
            int v = pq.top();
            pq.pop();
            ans += v;
            pq.push(ceil(v/3.0));
        }
        return ans;
    }
};