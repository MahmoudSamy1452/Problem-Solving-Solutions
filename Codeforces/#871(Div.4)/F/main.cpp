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
    int n, m, u, v;
    cin >> n >> m;
    vector<int> d(n, 0);
    while(m--){
        cin >> u >> v;
        d[u-1]++; d[v-1]++;
    }
    map<int, int> x;
    for(auto e : d){
        x[e]++;
    }
    int xy, xv;
    for (auto i: x) {
        if (i.f == 1) {
            xy = i.s;
        } else if(x.size() == 2){
            xv = i.s - 1;
        } else if(x.size() == 3){
            if(i.s == 1)
                xv = i.f;
        }
    }
    cout << xv << " " << xy / xv << "\n";
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