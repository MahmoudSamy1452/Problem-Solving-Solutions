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
#define pb push_back
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define all(v) v.begin(), v.end()

int n = 1;

ll A1(ll s, ll d){
    ll buns = (s+d)*2, burgers_cheese = s+d*2;
    return max(min(buns-1, burgers_cheese),(ll)0);
}

void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    ll l = 0, r = c, ans = 0;
    while(l <= r){
        ll mid = (l+r)/2;
        if(a*mid > c || a > b)
            r = mid-1;
        else {
            ll d = (c - a * mid) / b;
            ans = max(ans,A1(mid, min(d, mid)));
            l = mid + 1;
        }
    }
    cout << "Case #" << n << ": " << ans << '\n';
}

int main(){
//    freopen("cheeseburger_corollary_1_input.txt", "r",stdin);
//    freopen("cheeseburger_corollary_1_output.txt","w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(n <= t) {
        solve();
        n++;
    }
}