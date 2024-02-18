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

void solve()
{
  int n; string t; string s;
  cin >> n >> t;
  unordered_map<string, vector<string>> mp;
  for(int i = 0; i < 2*n; i++){
    cin >> s;
    mp[string(1, s[1])].push_back(string(1, s[0]));
  }

  vector<string> ans;
  for(auto p : mp){
    vector<string> v = p.second;
    sort(v.begin(), v.end());
    if(p.first == t)
      continue;
    while(v.size() >= 2){
      string card1 = v.back() + p.first;
      v.pop_back();
      string card2 = v.back() + p.first;
      v.pop_back();
      ans.push_back(card2);
      ans.push_back(card1);
    }
    if(v.size() && mp[t].size()){
      string card1 = v.back() + p.first;
      v.pop_back();
      string card2 = "" + mp[t].back() + t;
      mp[t].pop_back();
      ans.push_back(card1);
      ans.push_back(card2);
    }
    if(v.size()){
      cout << "IMPOSSIBLE" << endl;
      return;
    }
  }
  sort(mp[t].begin(), mp[t].end());
  if(mp[t].size() % 2){
    cout << "IMPOSSIBLE" << endl;
    return;
  }
  int i = 0;
  while(i < ans.size()){
    cout << ans[i] << " " << ans[i+1] << endl;
    i+=2;
  }
  i = 0;
  while(i < mp[t].size()){
    cout << mp[t][i] + t << " " << mp[t][i+1] + t << endl;
    i+=2;
  }
}

int main()
{
  fast_cin();

  ll t = 1;
  cin >> t;
  for (int it = 1; it <= t; it++)
  {
    // cout << "Case #" << it << ": ";
    solve();
  }
  return 0;
}