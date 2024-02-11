#include <bits/stdc++.h>

using namespace std;

#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

int maximize_profit(vector<int> &prices)
{
  // 0 = rest, 1 = plant, 2 = harvest
  vector<vector<int>> dp(3, vector<int>(prices.size(), 0));
  dp[1][0] -= prices[0];
  for (int i = 1; i < prices.size(); i++)
  {
    dp[0][i] = max({dp[0][i - 1], dp[1][i - 1], dp[2][i - 1]});
    dp[1][i] = max(dp[1][i - 1], dp[0][i - 1] - prices[i]);
    dp[2][i] = max(dp[0][i - 1], dp[1][i - 1] + prices[i]);
  }
  return max({dp[0].back(), dp[2].back()});
}

void solve()
{
  int n;
  cin >> n;
  vector<int> prices(n);
  for (int i = 0; i < n; i++)
    cin >> prices[i];
  cout << maximize_profit(prices);
}

int main()
{
  fast_cin();

  long long t = 1;
  // cin >> t;
  for (int it = 1; it <= t; it++)
  {
    // cout << "Case #" << it << ": ";
    solve();
  }
  return 0;
}