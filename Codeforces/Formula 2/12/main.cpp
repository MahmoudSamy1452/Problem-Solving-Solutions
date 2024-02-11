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
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define all(v) v.begin(), v.end()

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n+1, 0);
    ll x, mx = 0;
    map<ll, ll> mp;
    rep(i, 0, n-1){
        cin >> x;
        mp[x]++;
    }
    for(auto x : mp){
        for(ll i = x.first; i <= n; i+=x.first){
            v[i]+=x.second;
            mx = max(mx, v[i]);
        }
    }
    cout << mx << '\n';
}

int main(){
    //freopen("input.txt", "r",stdin);
    //freopen("output.txt","w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
}