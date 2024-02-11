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

int light[5][5];

int paths[4] = {1,2,3,4};

void solve(){

    rep(i, 1, 4){
        rep(j, 1, 4) {
            cin >> light[i][j];
        }
    }

    rep(j, 1, 3) {
        rep(i, 1, 4)
        if(light[i][j] && (light[paths[(i+(int)abs(3-j))%4]][4] || light[i][4])){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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