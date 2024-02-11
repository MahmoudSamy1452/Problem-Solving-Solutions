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
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define all(v) v.begin(), v.end()

void solve(){
    int n, q, x, y;
    cin >> n >> q;
    map<string, ll> mp;
    string str;

    while(n--){
        cin >> str >> x;
        mp[str] = x;
    }

    while(q--){
        cin >> y >> str;
        if(y == 1) {
            cin >> x;
            mp[str] += x;
        }
        else {
            cout << mp[str] << '\n';
        }
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