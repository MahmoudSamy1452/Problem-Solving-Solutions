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

bool vis[1005][1005];
int a[1005][1005];

int dfs(int n, int m, int i, int j){
    int ans = a[i][j];
    vis[i][j] = true;
    if(i > 0 && !vis[i-1][j] && a[i-1][j])
        ans += dfs( n, m, i-1, j);
    if(i < n-1 && !vis[i+1][j] && a[i+1][j])
        ans += dfs( n, m, i+1, j);
    if(j > 0 && !vis[i][j-1] && a[i][j-1])
        ans += dfs( n, m, i, j-1);
    if(j < m-1 && !vis[i][j+1] && a[i][j+1])
        ans += dfs( n, m, i,j + 1);
    return ans;
}


void solve(){
    int n, m, ans = 0;
    cin >> n >> m;
    rep(i, 0, n-1)
        rep(j, 0, m-1) {
            vis[i][j] = false;
            cin >> a[i][j];
        }

    rep(i, 0, n-1)
        rep(j, 0, m-1) {
            if(!vis[i][j] && a[i][j])
                ans = max(ans, dfs(n, m, i, j));
        }
    cout << ans << "\n";
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