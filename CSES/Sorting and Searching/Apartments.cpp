#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<double> vd;
typedef pair<int, int> pi;
typedef map<int, int> mi;
typedef set<int> si;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a) * (a)

void solve()
{
  int n, m, cnt = 0;
  ll k;
  cin >> n >> m >> k;
  vector<ll> a(n), b(m);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  for (int i = 0, j = 0; i < n && j < m;)
  {
    if (abs(a[i] - b[j]) <= k)
    {
      cnt++;
      i++;
      j++;
      continue;
    }
    if (b[j] > a[i])
      i++;
    else
      j++;
  }
  cout << cnt;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  // cin >> t;
  while (t--)
    solve();
}