class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        std::priority_queue<long long, std::vector<long long>, std::greater<long long>> pq; int ans = 0;
        for(int& num: nums) pq.push(num);
        while(pq.top() < k) {
            long long num1 = pq.top(); pq.pop();
            long long num2 = pq.top(); pq.pop();
            pq.push(num1 * 2 + num2);
            ans++;
        }
        return ans;
    }
};