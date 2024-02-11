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
    ll n, h, w, maxe1 = -1, maxi1 = -1, maxe2 = -1, maxi2 = -1, sumw =0;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for(int i = 0; i < n; i++){
        cin >> w >> h;
        v[i] = mp(w, h);
        sumw += w;
    }
    for(int i = 0; i < n; i++){
        if(maxe1 < v[i].s) {
            maxe1 = v[i].s;
            maxi1 = i;
        }
    }
    for(int i = 0; i < n; i++){
        if(maxe2 < v[i].s && i != maxi1) {
            maxe2 = v[i].s;
            maxi2 = i;
        }
    }
    for(int i = 0; i < n; i++){
        if(maxi1 == i)
            cout << maxe2 * (sumw-v[i].f) << " ";
        else
            cout << maxe1 * (sumw-v[i].f) << " ";
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