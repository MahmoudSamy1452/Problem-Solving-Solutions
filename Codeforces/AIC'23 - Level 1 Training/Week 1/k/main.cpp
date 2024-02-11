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
    int n, m, x, d = 0;
    cin >> n >> m;
    vi v(n+1), c(1e5+1, 0), a(n+1);
    rep(i, 1, n){
        cin >> v[i];
        if(!c[v[i]])
            d++;
        c[v[i]]++;
    }
    a[1] = d;
    rep(i, 2, n){
        c[v[i-1]]--;
        if(!c[v[i-1]])
            d--;
        a[i] = d;
    }
    rep(i, 0, m-1){
        cin >> x;
        cout << a[x] << '\n';
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