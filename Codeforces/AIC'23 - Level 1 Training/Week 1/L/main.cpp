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

bool larger(int x, int y){
    return x > y;
}

void solve(){
    int n, m, mx = 0, mn = 0;
    cin >> n >> m;
    vi v(m), q(m);
    rep(i, 0, m-1) {
        cin >> v[i];
        q[i] = v[i];
    }
    //max
    sort(all(v), larger);
    int j = 0;
    rep(i, 0, n-1){
        mx += v[j];
        v[j]--;
        if((j < m-1 && v[j]+1 > v[j+1]) || j == m-1)
            j = 0;
        else j++;
    }
    //min
    sort(all(q));
    j = 0;
    rep(i, 0, n-1){
        mn += q[j];
        q[j]--;
        if(!q[j])
            j++;
    }
    cout << mx << " " << mn;
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