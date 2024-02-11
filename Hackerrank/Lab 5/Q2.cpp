#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

ll min_dananir(vector<ll> &dananir, vector<ll> &dp, ll x)
{
  if (dp[x] == -1)
  {
    ll mn = LLONG_MAX;
    for (ll i = 0; i < dananir.size(); i++)
    {
      if (x - dananir[i] >= 0)
        mn = min(mn, min_dananir(dananir, dp, x - dananir[i]));
    }
    dp[x] = mn + (mn != LLONG_MAX);
  }
  return dp[x];
}

void bottom_up(vector<ll> &dananir, vector<ll> &dp)
{
  dp[0] = 0;
  for (int i = 1; i < dp.size(); i++)
  {
    ll mn = LLONG_MAX;
    for (int j = 0; j < dananir.size(); j++)
    {
      if (i - dananir[j] >= 0)
        mn = min(mn, dp[i - dananir[j]]);
    }
    dp[i] = mn + (mn != LLONG_MAX);
  }
}

void solve()
{
  ll n, x;
  cin >> n >> x;
  vector<ll> dananir(n);

  for (ll i = 0; i < n; i++)
  {
    cin >> dananir[i];
  }

  vector<ll> dp(x + 1, -1);
  dp[0] = 0;
  // ll ans = min_dananir(dananir, dp, x);
  
  bottom_up(dananir, dp);
  ll ans = dp.back();
  if (ans == LLONG_MAX)
    cout << -1;
  else
    cout << ans;
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