// 552. Student Attendance Record II

// An attendance record for a student can be represented as a string where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:

// 'A': Absent.
// 'L': Late.
// 'P': Present.
// Any student is eligible for an attendance award if they meet both of the following criteria:

// The student was absent ('A') for strictly fewer than 2 days total.
// The student was never late ('L') for 3 or more consecutive days.
// Given an integer n, return the number of possible attendance records of length n that make a student eligible for an attendance award. The answer may be very large, so return it modulo 109 + 7.

// Example 1:

// Input: n = 2
// Output: 8
// Explanation: There are 8 records with length 2 that are eligible for an award:
// "PP", "AP", "PA", "LP", "PL", "AL", "LA", "LL"
// Only "AA" is not eligible because there are 2 absences (there need to be fewer than 2).
// Example 2:

// Input: n = 1
// Output: 3
// Example 3:

// Input: n = 10101
// Output: 183236316

// Constraints:

// 1 <= n <= 1e5

class Solution {
    const int MOD = 1e9 + 7;
    int rec(int i, vector<vector<vector<int>>>& dp, int abs, int late){
        if(abs >= 2 || late >= 3) return 0;
        if(i == 0) return 1;
        if(dp[abs][late][i] != -1) return dp[abs][late][i];
        int count = 0;
        count = rec(i-1, dp, abs, 0);
        count = (count + rec(i-1, dp, abs+1, 0)) % MOD; 
        count = (count + rec(i-1, dp, abs, late+1)) % MOD;
        return dp[abs][late][i] = count; 
    }
public:
    int checkRecord(int n) {
        vector<vector<vector<int>>> dp(2, vector<vector<int>>(3, vector<int>(n+1, -1)));
        return rec(n, dp, 0, 0);
    }
};