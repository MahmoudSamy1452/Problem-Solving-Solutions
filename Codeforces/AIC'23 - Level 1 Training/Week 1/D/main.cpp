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
    int n, k, x, c = 0;
    cin >> n >> k;
    vector<int> v(n), r(k); //value, isTaken
    rep(i, 0, n - 1) {
        cin >> v[i];
        r[v[i]%k]++;
    }
    c = r[0]/2;
    if(k%2) {
        rep(i, 1, k / 2) {
            c += min(r[i], r[k - i]);
        }
    } else {
        rep(i, 1, k / 2 - 1) {
            c += min(r[i], r[k - i]);
        }
        c += r[k/2]/2;
    }
    cout << c*2 << '\n';
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