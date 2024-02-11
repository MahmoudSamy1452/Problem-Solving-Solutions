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

vector<ll> d;

ll kthDivisor(ll n, ll k){
    ll i;
    for(i = 1; i*i < n; i++){
        if(n%i == 0) {
            d.push_back(i); d.push_back(n/i);
        }
    }
    if(i*i == n)
        d.push_back(i);
    sort(all(d));
    if(k > d.size())
        return -1;
    else
        return d[k-1];
}

void solve(){
    ll n, k;
    cin >> n >> k;
    cout << kthDivisor(n, k);
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