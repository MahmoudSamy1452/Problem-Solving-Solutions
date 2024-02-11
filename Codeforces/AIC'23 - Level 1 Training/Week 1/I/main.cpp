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
    string s;
    cin >> s;
    vi v(s.size()+1, 0);
    rep(i, 1, s.size()-1){
        v[i] = v[i-1] + (s[i-1]==s[i]);
    }
    v[s.size()] = v[s.size()-1];
    int t, l, r;
    cin >> t;
    while(t--){
        cin >> l >> r;
        cout << v[r-1]-v[l-1] << '\n';
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