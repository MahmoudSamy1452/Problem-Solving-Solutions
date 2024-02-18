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
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
const ll MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 4e18;
const double EPS = 1e-9; // small change which is used to account for possible error in floating point calculations
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

long long divide_and_conquer(vector<long long>& nums, vector<vector<int>>& dp, int s, int e, long long m){
  if(e < s) return 1;
  if(s == e) return nums[e];
  if(dp[s][e] != -1) return dp[s][e];
  return dp[s][e] = (divide_and_conquer(nums, dp, s, (s+e)/2, m)%m * divide_and_conquer(nums, dp, (s+e)/2 + 1, e, m)%m)%m;
}

// void solve(){
//   long long n, m; char c;
//   cin >> n >> m;
//   int s = 0, e = n-1;
//   vector<long long> nums(n);
//   for(int i = 0; i < n; i++){
//     cin >> nums[i];
//   }
//   vector<vector<int>> dp(n, vector<int>(n, -1));
//   for(int i = 0; i < n; i++){
//     cout << divide_and_conquer(nums, dp, s, e, m)%m << " ";
//     cin >> c;
//     if(c == 'L')
//       s++;
//     else
//       e--;
//   }
//   cout << endl;
// }

// void solve(){
//   int n, m; char c;
//   cin >> n >> m;

//   vector<int> nums(n);
//   for(int i = 0; i < n; i++){
//     cin >> nums[i];
//   }

//   vector<vector<int>> dp(n, vector<int>(n, -1));
//   for(int i = 0; i < n; i++){
//     dp[i][i] = nums[i]%m;
//   }
//   for(int j = 1; j < n; j++){
//     for(int i = j-1; i >= 0; i--){
//       dp[j][i] = (nums[i]%m*dp[j][i+1])%m;
//     }
//   }

//   int s = 0, e = n-1;
//   for(int i = 0; i < n; i++){
//     cout << dp[e][s] << " ";
//     cin >> c;
//     if(c == 'L')
//       s++;
//     else
//       e--;
//   }
//   cout << endl;
// }

// void solve(){
//   int n, m; char c;
//   cin >> n >> m;

//   vector<int> nums(n);
//   for(int i = 0; i < n; i++){
//     cin >> nums[i];
//   }

//   int s = 0, e = n;
//   while(n--){
//     int product = 1;
//     for(int i = s; i < e; i++){
//       product = (product * nums[i]%m)%m;
//     } 
//     cout << product << " ";
//     cin >> c;
//     if(c == 'L')
//       s++;
//     else e--;
//   }
//   cout << endl;
// }

void solve(){
  int n, m; string str;
  cin >> n >> m;

  vector<int> nums(n);
  for(int i = 0; i < n; i++){
    cin >> nums[i];
  }

  cin >> str;
  int s = -1;
  for(char& c : str)
    if(c == 'L')
      s++;
  
  reverse(str.begin(), str.end());
  int e = s+1;
  stack<int> st; int p = 1;
  for(char& c : str){
    if(c == 'L')
      p = (p*nums[s--]%m)%m;
    else p = (p*nums[e++]%m)%m;
    st.push(p);
  }

  while(st.size()){
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
}

int main()
{
  fast_cin();

  ll t = 1;
  cin >> t;
  for(int it=1;it<=t;it++) {
    // cout << "Case #" << it << ": ";
    solve();
  }
  return 0;
}