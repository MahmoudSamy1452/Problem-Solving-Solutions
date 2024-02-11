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
    int n, k, mi, m = INT_MAX;
    cin >> n >> k;
    vi v(n+1);
    rep(i, 1, n){
        cin >> v[i];
    }
    rep(i, 1, n){
        v[i] += v[i-1];
    }
    rep(i, k, n){
        if(m > v[i]-v[i-k]){
            mi = i-k+1;
            m = v[i]-v[i-k];
        }
    }
    cout << mi;
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