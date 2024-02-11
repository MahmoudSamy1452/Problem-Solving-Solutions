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

void solve(){
    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> v(n+1);
    rep(i, 1, n){
        cin >> v[i];
    }
    ll p, k;
    while(q--){
        cin >> p >> k;
        if((p*v[k])/m % 2){
            cout << m - (p*v[k])%m << "\n";
        } else {
            cout << (p*v[k])%m << "\n";
        }
    }
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