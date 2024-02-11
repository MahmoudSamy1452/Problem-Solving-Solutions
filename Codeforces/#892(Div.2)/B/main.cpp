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
#define sq(a) (a)*(a)
#define all(v) v.begin(), v.end()

void solve() {
    ll n, m, x; cin >> n;
    vector<ll> mn(n, 0), s_mn(n, 0);
    for(ll i = 0; i < n; i++){
        cin >> m;
        while(m--) {
            cin >> x;
            if (!mn[i] || x < mn[i]) {
                s_mn[i] = (s_mn[i] ? min(mn[i], s_mn[i]) : mn[i]);
                mn[i] = x;
            } else if (!s_mn[i] || x < s_mn[i]) {
                s_mn[i] = x;
            }
        }
    }
    ll minimum = *min_element(all(mn));
    ll sum = 0;
    for(ll e : s_mn)
        sum+=e;
    ll ans = 0;
    for(int i = 0;i < n; i++){
        ans = max(ans, sum - s_mn[i] + minimum);
    }
    cout << ans << '\n';
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