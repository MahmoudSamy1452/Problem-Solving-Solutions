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
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define all(v) v.begin(), v.end()

int grid[11][101][101];

void solve(){
    memset(grid, 0, sizeof(grid));
    int n, q, c, x, y, s;
    cin >> n >> q >> c;
    while(n--){
        cin >> x >> y >> s;
        grid[s][x][y]++;
    }
    rep(i, 0, 10){
        rep(j, 1, 100){
            rep(k, 1, 100){
                grid[i][j][k] += grid[i][j][k-1] + grid[i][j-1][k] - grid[i][j-1][k-1];
            }
        }
    }
    while(q--){
        int t, x1, x2, y1, y2;
        cin >> t >> x1 >> y1 >> x2 >> y2;
        int ans = 0;
        rep(i, 0, 10){
            int curr = (i+t)%(c+1);
            int num = grid[i][x2][y2] - grid[i][x1-1][y2] - grid[i][x2][y1-1] + grid[i][x1-1][y1-1];
            ans += num * curr;
        }
        cout << ans << '\n';
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