#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
const ll MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 4e18;
const double EPS = 1e-9; // small change which is used to account for possible error in floating point calculations
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
vector<int> diag1(20, 0);
vector<int> diag2(20, 0);
vector<int> col(8, 0);
 
ll place_queens(vector<string> grid, int i)
{
  if (i == grid.size())
    return 1;
  ll count = 0;
  for (int j = 0; j < 8; j++)
    if (!diag1[i + j] && !diag2[7 - i + j] && !col[j] && grid[i][j] != '*')
    {
      diag1[i + j] = diag2[7 - i + j] = col[j] = 1;
      count += place_queens(grid, i + 1);
      diag1[i + j] = diag2[7 - i + j] = col[j] = 0;
    }
  return count;
}
 
void solve()
{
  vector<string> grid(8);
  for (int i = 0; i < 8; i++)
    cin >> grid[i];
  cout << place_queens(grid, 0);
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