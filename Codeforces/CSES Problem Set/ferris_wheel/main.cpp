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
    ll n, x, ans = 0;
    cin >> n >> x;
    vector<ll> w(n);
    for(int i = 0; i < n; i++){
        cin >> w[i];
    }
    sort(w.begin(), w.end());
    auto it1 = w.begin(), it2 = w.end();
    it2--;
    while(it1 <= it2) {
        if (*it1 + *it2 <= x)
            it1++;
        it2--;
        ans += 1;
    }
    cout << ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
}