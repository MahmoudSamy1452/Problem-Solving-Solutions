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
    int n, q, a, b, c, d;
    cin >> n >> q;
    vector<pair<int, int>> res_clan(n+1);
    map<int,multiset<int>> clans;
    multiset<int> ratings;
    rep(i, 0, n-1)
    {
        cin >> a >> b;
        clans[b].insert(a*-1);
        res_clan[i+1] = mp(b,a);
    }
    for(auto clan : clans){
        ratings.insert(*clan.s.begin()*-1);
    }
    rep(i, 0, q-1)
    {
        cin >> c >> d;
        auto it = clans[res_clan[c].f].find(res_clan[c].s*-1);
        clans[res_clan[c].f].erase(it);
        it = ratings.find(res_clan[c].s*-1);
        ratings.erase(it);
        clans[d].insert(res_clan[c].s);
        ratings.insert(*clans[d].begin()*-1);
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