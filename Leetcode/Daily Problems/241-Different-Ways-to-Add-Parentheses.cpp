class Solution {

    vector<int> rec(vector<vector<vector<int>>>& dp, string expression, int start, int end) {
        if(dp[start][end].size()) return dp[start][end];

        vector<int> ans;
        if(start == end) {
            ans.push_back(expression[start] - '0');
            return ans;
        }

        if(end - start == 1 && isdigit(expression[start])) {
            int tens = expression[start] - '0';
            int ones = expression[end] - '0';
            ans.push_back(10 * tens + ones);
            return ans;
        }

        for(int i = start; i <= end; i++) {
            char c = expression[i];
            if(isdigit(c)) continue;
            vector<int> leftResults = rec(dp, expression, start, i - 1);
            vector<int> rightResults = rec(dp, expression, i + 1, end);

            for(int leftValue: leftResults) {
                for(int rightValue: rightResults) {
                    switch(c) {
                        case '+':
                            ans.push_back(leftValue + rightValue);
                            break;
                        case '-':
                            ans.push_back(leftValue - rightValue);
                            break;
                        case '*':
                            ans.push_back(leftValue * rightValue);
                            break;
                    }
                }
            }
        }
        return dp[start][end] = ans;
    }

public:
    vector<int> diffWaysToCompute(string expression) {
        vector<vector<vector<int>>> dp(expression.length(), vector<vector<int>>(expression.length()));
        return rec(dp, expression, 0, expression.length() - 1);
    }
};