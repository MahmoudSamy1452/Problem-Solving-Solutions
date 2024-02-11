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
#define rep(i, a, b) for (ll i = a; i <= b; i++)
#define sq(a) (a)*(a)

bool sorting(pair<int,pair<int, int>> a, pair<int,pair<int, int>> b) {
    if(a.s.f > b.s.f)
        return true;
    else if (a.s.f < b.s.f)
        return false;
    if(a.s.s < b.s.s)
        return true;
    if(a.f == 0 && a.s.f == b.s.f && a.s.s == b.s.s)
        return true;
    return false;
}

void solve(){
    ll n, m, h;
    cin >> n >> m >> h;
    vector<vector<ll>> t(n, vector<ll>(m));
    vector<pair<ll,pair<ll, ll>>> rank;

    rep(i, 0, n-1)
        rep(j, 0, m-1)
            cin >> t[i][j];

    for(ll i = 0; i < n; i++) {
        vector<ll> v = t[i];
        sort(v.begin(), v.end());
        ll pen = 0, pts = 0, time = 0;
        for(ll x : v){
            if(time+x > h)
                break;
            time += x;
            pen += time;
            pts++;
        }
        rank.pb(mp(i, mp(pts,pen)));
    }

    sort(rank.begin(), rank.end(), sorting);
    rep(i, 1, n){
        if(rank[i-1].f == 0) {
            cout << i << '\n';
            break;
        }
    }
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