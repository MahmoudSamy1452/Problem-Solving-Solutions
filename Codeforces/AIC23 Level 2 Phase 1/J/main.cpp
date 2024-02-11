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

void solve(){
    ll n, d, m, ans = 0;
    int norem;
    cin >> n >> d >> m;
    vi v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int last_change = 0, prev = -1;
    for(int i = 0; i < n; i++) {
        for (int j = last_change; j < n; j++) {
            norem = (v[i] % d) ? 0 : 1;
            if (v[j] / d - v[i] / d + norem == m)
                ans++;
            else if (v[j] / d - v[i] / d + norem > m)
                break;
        }
        if(prev != v[i])
            last_change = i;
        prev = v[i];
    }
    cout << ans;
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