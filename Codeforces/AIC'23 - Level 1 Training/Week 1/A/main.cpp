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
    int n, m = INT_MIN;
    cin >> n;
    vi v(n), s(2e5 + 1);
    rep(i, 0, n - 1) {
        cin >> v[i];
    }
    rep(i, 0, n - 1){
        rep(j, i + 1, n - 1) {
            s[v[i] + v[j]]++;
            m = max(m, s[v[i] + v[j]]);
        }
    }
    cout << m << ' ';
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