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
 
set<string> ans;
 
void create_string(string str, string created, vector<bool> &is_used)
{
  if (created.size() == str.size())
  {
    ans.insert(created);
    return;
  }
  for (int i = 0; i < str.size(); i++)
  {
    if(is_used[i])
      continue;
    is_used[i] = true;
    create_string(str, created + str[i], is_used);
    is_used[i] = false;
  }
}
 
void solve()
{
  string s;
  cin >> s;
  vector<bool> is_used(s.size(), false);
  create_string(s, "", is_used);
  cout << ans.size() << '\n';
  for(string x : ans){
    cout << x << '\n';
  }
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