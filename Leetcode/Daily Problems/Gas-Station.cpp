class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size(), netGas = 0, curGas = 0, start = 0;
        for(int i = 0; i < n; i++) {
            netGas += gas[i] - cost[i];
            curGas += gas[i] - cost[i];
            if(curGas < 0) {
                curGas = 0;
                start = i + 1;
            }
        }
        return netGas < 0 ? -1 : start;
    }
};