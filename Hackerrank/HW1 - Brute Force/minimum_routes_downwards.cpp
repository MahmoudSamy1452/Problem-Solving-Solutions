#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

int min_route(const vector<vector<int>> &mountain, int i, int j)
{
  if (i == mountain.size())
    return 0;
  if (j == mountain.size() || j == -1)
    return INT_MAX;
  return mountain[i][j] + min({ min_route(mountain, i + 1, j),
                                min_route(mountain, i + 1, j + 1),
                                min_route(mountain, i + 1, j - 1)});
}

void solve()
{
  int n;
  cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> v[i][j];
    }
  }
  int mn = INT_MAX;
  for(int i = 0; i < n; i++)
    mn = min(min_route(v, 0, i), mn);
  cout << mn;
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