#include <bits/stdc++.h>

using namespace std;

#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

void maximize_profit(int i, int j, int last_l, int last_r, vector<int> &profits, vector<vector<int>> &dp)
{
  if (i > j || dp[i][j])
    return;

  for (int k = i; k <= j; k++)
  {
    maximize_profit(i, k - 1, last_l, profits[k], profits, dp);
    maximize_profit(k + 1, j, profits[k], last_r, profits, dp);
    dp[i][j] = max(dp[i][j], dp[i][k - 1] + last_l * profits[k] * last_r + dp[k + 1][j]);
  }
}

void solve()
{
  int n;
  cin >> n;
  vector<int> profits(n + 1, 0);
  for (int i = 1; i <= n; i++)
  {
    cin >> profits[i];
  }

  vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

  long long ans = 0;
  maximize_profit(1, n, 1, 1, profits, dp);
  cout << dp[1][n];
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