#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

void solve()
{
  int x, y;
  cin >> x >> y;
  vector<vector<ll>> grid(x + 1, vector<ll>(y + 1));

  for (int i = 0; i <= y; i++)
  {
    grid[0][i] = 1;
  }

  for (int i = 0; i <= x; i++)
  {
    grid[i][0] = 1;
  }

  for (int i = 1; i <= x; i++)
  {
    for (int j = 1; j <= y; j++)
    {
      grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
    }
  }
  cout << grid[x][y];
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