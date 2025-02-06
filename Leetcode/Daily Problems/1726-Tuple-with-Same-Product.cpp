class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> prod;
        int count = 0, n = nums.size();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int product = nums[i] * nums[j];
                count += 8 * prod[product]++;
            }
        }
        
        return count;
    }
};