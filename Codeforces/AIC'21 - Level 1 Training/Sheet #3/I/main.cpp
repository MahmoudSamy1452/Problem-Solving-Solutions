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

void solve(){
    ll n, m = LONG_LONG_MAX;
    cin >> n;
    vector<ll> v(n);
    rep(i, 0, n-1)
        cin >> v[i];
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            m = min(m, v[i]+v[j]+j-i);
        }
    }
    cout << m << '\n';
}

int main(){
    //freopen("sets.in", "r",stdin);
    //freopen("output.txt","w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    while(t--)
        solve();
}
