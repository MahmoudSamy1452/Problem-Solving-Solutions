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
    int n, m = INT_MIN;
    cin >> n;
    vi pre(n+1), suf(n+1), v(n);
    pre[0] = 0;
    rep(i, 1, n)
    {
        cin >> v[i-1];
        pre[i] = gcd( v[i-1], pre[i-1]);
    }
    suf[0] = 0;
    rep(i, 1, n)
    {
        suf[i] = gcd( v[n-i], suf[i-1]);
    }
    rep(i, 0, n-1){
        m = max(m, gcd(pre[i], suf[n-1-i]));
    }
    cout << m;
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