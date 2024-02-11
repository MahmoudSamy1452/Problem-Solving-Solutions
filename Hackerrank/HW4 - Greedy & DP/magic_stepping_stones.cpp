#include <bits/stdc++.h>

using namespace std;

#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

int min_jumps(vector<int> &v)
{
  int cur = 0, count = 0, i = 1;
  while (i < v.size())
  {
    int farthest = 0, farthest_i;
    for (i = cur + 1; i <= cur + v[cur] && i < v.size(); i++)
    {
      if (farthest < i + v[i])
      {
        farthest = i + v[i];
        farthest_i = i;
      }
    }
    count++;
    cur = farthest_i;
  }
  return count;
}

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  cout << min_jumps(v);
}

int main()
{
  fast_cin();
  int t = 1;
  // cin >> t;
  for (int it = 1; it <= t; it++)
  {
    // cout << "Case #" << it << ": ";
    solve();
  }
  return 0;
}