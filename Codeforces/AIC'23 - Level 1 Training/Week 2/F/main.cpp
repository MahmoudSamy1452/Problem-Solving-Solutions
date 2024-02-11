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

vector<ll> v;
vi f(3001, 0);

ll sieve(ll n){
    ll c, ans = 0, i = 2;
    while(i*i <= n) {
        if(!v[i]) {
            ll k = 2;
            while (i * k <= n) {
                v[i * k] = i;
                k++;
            }
        }
        i++;
    }

    rep(j, 4, n) {
        i = j;
        c = 0;
        std::fill(f.begin(), f.end(), 0);
        while (v[i]) {
            f[v[i]]++;
            i /= v[i];
        }
        f[i]++;
        rep(k, 0, 3000){
            c += f[k] != 0;
        }
        if(c == 2){
            ans++;
        }
    }
    return ans;
}

void solve(){
    ll n;
    cin >> n;
    v.resize(n+1, 0);
    cout << sieve(n);
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