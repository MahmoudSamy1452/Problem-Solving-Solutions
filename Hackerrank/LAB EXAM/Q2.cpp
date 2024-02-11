#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

int count_power(int i, vector<int> &dp)
{
  if (dp[i] == -1)
  {
    if (i % 2)
      dp[i] = count_power(i * 3 + 1, dp) + 1;
    else
      dp[i] = count_power(i / 2, dp) + 1;
  }
  return dp[i];
}

void solve()
{
  int start, end, target;
  cin >> start >> end >> target;
  vector<int> dp(1e6, -1);
  int count = 0;
  for (int i = 1; i <= 1e6; i *= 2)
  {
    dp[i] = count++;
  }
  vector<pair<int, int>> counts;
  for (int i = start; i <= end; i++)
  {
    counts.push_back({count_power(i, dp), i});
  }
  sort(counts.begin(), counts.end());
  cout << counts[target - 1].second;
}

int main()
{
  fast_cin();

  ll t = 1;
  // cin >> t;
  for (int it = 1; it <= t; it++)
  {
    // cout << "Case #" << it << ": ";
    solve();
  }
  return 0;
}