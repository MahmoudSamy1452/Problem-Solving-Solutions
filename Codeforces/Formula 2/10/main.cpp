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
    ll n, k;
    cin >> n >> k;
    vi cookie(n), available(n);
    rep(i, 0, n-1)
        cin >> cookie[i];
    rep(i, 0, n-1)
        cin >> available[i];
    ll start = 0, end = 1e9, ans;
    while(start <= end){
        ll sum = 0, mid = start + (end-start)/2;
        rep(i, 0, n-1){
            sum += max(cookie[i] * mid - available[i], (ll)0);
        }
        if(sum <= k) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
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