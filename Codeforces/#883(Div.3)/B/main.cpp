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
    vector<vector<char>> v(3, vector<char>(3));
    rep(i, 0, 2)
        rep(j, 0, 2)
            cin >> v[i][j];

    rep(i, 0, 2){
        if(v[i][0] == v[i][1] && v[i][1] == v[i][2] && v[i][0] != '.'){
            cout << v[i][0] << '\n';
            return;
        }
    }

    rep(j, 0, 2){
        if(v[0][j] == v[1][j] && v[1][j] == v[2][j] && v[0][j] != '.'){
            cout << v[0][j] << '\n';
            return;
        }
    }

    if(v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[0][0] != '.') {
        cout << v[0][0] << '\n';
        return;
    }

    if(v[0][2] == v[1][1] && v[1][1] == v[2][0] && v[0][2] != '.') {
        cout << v[0][2] << '\n';
        return;
    }
    cout << "DRAW" << '\n';
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