class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size(); vector<int> freq(101, 0);
        for(int i =  n - 1; i >= 0; i--) {
            if(freq[nums[i]]++) return (i + 1)/3 + ((i + 1)%3 > 0);
        }
        return 0;
    }
};