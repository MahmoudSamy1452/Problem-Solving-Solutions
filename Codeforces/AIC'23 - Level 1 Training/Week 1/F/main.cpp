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
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define all(v) v.begin(), v.end()

void solve() {
    int n, k, ans = 0, m = 0, mi = 0;
    cin >> n >> k;
    vector<pi> v(n+1);
    vi a(n+1, 0);
    rep(i, 1, n){
       cin >> v[i].first;
    }
    rep(i, 1, n){
        cin >> v[i].second;
        ans += v[i].second ? v[i].first : 0;
    }
    rep(i, 1, n){
        a[i] += a[i-1] + (!v[i].second ? v[i].first : 0);
    }
    rep(i, 0, n-k){
        m = max(m, a[i+k]-a[i]);
    }
    cout << m + ans;
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