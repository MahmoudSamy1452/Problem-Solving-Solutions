#include <bits/stdc++.h>
using namespace std;

long long int count(int coins[], int N, int sum) {
    // code here.
    vector<int> dp(sum+1,0);
    dp[0] = 1;
    for(int i = 0; i < N; i++){
        for(int j = coins[i]; j <= sum; j++){
            dp[j] += dp[j-coins[i]];
        }
    }
    return dp[sum];
}

int main(){
    int coins[3] = {1, 2, 3};
    cout << count( coins, 3, 4);
}