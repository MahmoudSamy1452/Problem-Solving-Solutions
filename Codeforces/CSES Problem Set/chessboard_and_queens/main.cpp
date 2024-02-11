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

vector<char> board(64);
vi col(8, 0), diag1(15,0), diag2(15,0);
ll cnt = 0;

void queen(int r){
    if(r == 8)
        cnt++;
    rep(c, 0, 7)
    {
        if (board[r*8+c] == '*' || col[c] || diag1[c+r] || diag2[c-r+7]) continue;
        col[c] = 1; diag1[c+r] = 1; diag2[c-r+7] = 1;
        board[r*8+c] = 'Q';
        queen(r+1);
        board[r*8+c] = '.';
        col[c] = 0; diag1[c+r] = 0; diag2[c-r+7] = 0;
    }
}

void solve(){
    rep(i, 0, 63)
        cin >> board[i];
    queen(0);
    cout << cnt;
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