class Solution {
    vector<int> convertToBinary(int n) {
        vector<int> binary;
        while(n) {
            binary.push_back(n%2);
            n/=2;
        }
        return binary;
    }
public:
    int longestNiceSubarray(vector<int>& nums) {
        int violations = 0, n = nums.size(), left = 0, right = 0, ans = 1;
        vector<int> bits(32);
        while(right < n) {
            vector<int> rightBits = convertToBinary(nums[right++]);
            for(int i = 0; i < rightBits.size(); i++) {
                bits[i] += rightBits[i];
                violations += bits[i] > 1;
            }
            while(violations && left <= right) {
                vector<int> leftBits = convertToBinary(nums[left++]);
                for(int i = 0; i < leftBits.size(); i++) {
                    violations -= bits[i] == 2 && leftBits[i] == 1;
                    bits[i] -= leftBits[i];
                }
            }
            if(!violations) ans = max(ans, right - left);
        }
        return ans;
    }
};