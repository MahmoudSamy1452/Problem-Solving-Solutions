#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

int max_product(int n)
{
  if (n == 1)
    return 1;
  int prod = 1;
  for (int i = 1; i < n; i++)
  {
    prod = max({prod, i * max_product(n - i), i * (n - i)});
  }
  return prod;
}

void solve()
{
  int n;
  cin >> n;
  cout << max_product(n);
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