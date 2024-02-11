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

vector<vi> grid;
int n, m;
bool valid(int i, int j){
    return i > -1 && i < n && j > -1 && j < m;
}

void solve(){
    int cnt = 0;
    int dx[] = {0, 0, 1, -1, 1,1,-1, -1};
    int dy[] = {1, -1, 0, 0, 1,-1,1, -1};
    cin >> n >> m;
    grid.resize(n, vi(m));
    for(int i = 0;i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (!grid[i][j]) {
                cnt++;
            }
        }
    }
    for(int i = 0;i < n; i++) {
        for (int j = 0; j < m; j++) {
            int cnt0 = 0;
            for(int k = 0; k < 8; k++){
                int x = i+dx[k];
                int y = j+dy[k];
                if(valid(x, y) && !grid[x][y])
                    cnt0++;
            }
            if(cnt0 == cnt) {
                cout << "WIN";
                return;
            }
        }
    }
    cout << "LOSE";
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