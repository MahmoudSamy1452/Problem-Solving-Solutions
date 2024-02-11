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
    int n, k, cnt = 1, m = -1;
    cin >> n >> k;
    vi v(n);
    rep(i, 0, n-1){
        cin >> v[i];
    }
    sort(all(v));
    rep(i, 0, n-2){
        if(v[i+1]-v[i] <= k)
            cnt++;
        else {
            m = max(m, cnt);
            cnt = 1;
        }
    }
    m = max(m, cnt);
    if(m == -1)
        cout << 0 << '\n';
    else
        cout << n-m << '\n';
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