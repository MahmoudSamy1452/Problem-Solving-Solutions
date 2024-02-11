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

map<ll, ll> factors;
vector<ll> v;

void sieve(ll n){
    v[0] = v[1] = 0;
    ll i = 2;
    while(i <= n) {
        ll k = 1;
        if(!v[i])
            while (i * k <= n) {
                v[i * k] = i;
                k++;
            }
        i++;
    }
    i = n;
    while(v[i]){
        factors[v[i]]++;
        i/=v[i];
    }
}

void solve(){
    ll n;
    cin >> n;
    v.resize(n+1, 0);
    sieve(n);
    if(factors.empty())
        cout << n << " " << 1;
    for(auto x : factors){
        cout << x.first << " " << x.second << "\n";
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