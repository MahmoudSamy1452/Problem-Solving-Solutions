class Solution {
public:
    long long coloredCells(int n) {
        long long sumOdd = 0, odd = 1;
        while(--n) {
            sumOdd += odd;
            odd += 2;
        }
        return sumOdd * 2 + odd;
    }
};