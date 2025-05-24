class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size(), i = 0, j = n-1;
        while(i < j) {
            if(numbers[i] + numbers[j] < target) i++;
            else if(numbers[i] + numbers[j] > target) j--;
            else break;
        }
        return {i + 1, j + 1};
    }
};