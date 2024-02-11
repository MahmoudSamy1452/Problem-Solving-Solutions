#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
  ll n, d, m, x, ans = 0;
  cin >> n >> d >> m;
  unordered_map<int, int> subsequence1;
  unordered_map<int, int> subsequence2;
  unordered_map<int, int> subsequence3;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    subsequence1[x]++;
    subsequence2[x] += subsequence1[x - d];
    subsequence3[x] += subsequence2[x - d];
    if (m == 2)
      ans += subsequence1[x - d];
    else
      ans += subsequence2[x - d];
  }
  cout << ans << '\n';
}

int main()
{
  ll t = 1;
  // cin >> t;
  for (int it = 1; it <= t; it++)
  {
    // cout << "Case #" << it << ": ";
    solve();
  }
  return 0;
}