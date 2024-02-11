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
    ll n;
    cin >> n;
    ll p, ans = 0, j, mx;
    vector<int> v, rev;
    for(int i = 1; i <= n; i++){
        v.push_back(i);
    }
    for(int i = 1; i <= n+1; i++) {
        p = 0;
        j = 1;
        mx = 0;
        for (; j <= v.size(); j++) {
            p += j * v[j - 1];
            mx = max(mx, j * v[j - 1]);
        }
        for (; j <= v.size() + rev.size(); j++) {
            p += j * rev[j - v.size() - 1];
            mx = max(mx, j * rev[j - v.size() - 1]);
        }
        ans = max(p - mx, ans);
        rev.push_back(v.back());
        v.pop_back();
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