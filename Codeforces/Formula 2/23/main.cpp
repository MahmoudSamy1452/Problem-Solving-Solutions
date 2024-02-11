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
    ll n, mx = 0, sum = 0;
    cin >> n;
    vector<ll> v(n);
    rep(i, 0, n-1){
        cin >> v[i];
        mx = max(mx, v[i]);
    }
    rep(i, 0, n-1){
        sum += mx-v[i];
    }
    cout << mx + (max((mx-sum),(ll)0)+n-2)/(n-1) << '\n';
}

int main(){
    //freopen("input.txt", "r",stdin);
    //freopen("output.txt","w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
}