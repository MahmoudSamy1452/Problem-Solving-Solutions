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

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    rep(i, 0, n-1){
        rep(j, 0, m-1){
            cin >> v[i][j];
        }
    }
    int k = 0;
    string name = "vika";
    rep(j, 0, m-1){
        if(k == 4){
            break;
        }
        rep(i, 0, n-1){
            if(v[i][j] == name[k]){
                k++;
                break;
            }
        }
    }
    if(k == 4)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
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