class Solution {
    int addDigits(int n) {
        int sum = 0;
        while(n) {
            sum+= n % 10;
            n /= 10;
        }
        return sum;
    }
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, priority_queue<int>> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[addDigits(nums[i])].push(nums[i]);
        }

        int mx = -1;
        for(auto p: mp) {
            if(p.second.size() == 1) continue;
            int num1 = p.second.top(); p.second.pop();
            int num2 = p.second.top();
            mx = max(mx, num1 + num2);
        }
        return mx;
    }
};