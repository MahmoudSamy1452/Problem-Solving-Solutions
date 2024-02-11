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
#define pb push_back
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define all(v) v.begin(), v.end()

void solve(){
    int n;
    cin >> n;
    vi v(n+1);
    vector<bool> b(n+1);
    rep(i, 1, n){
        cin >> v[i];
    }
    string bin;
    cin >> bin;
    rep(i, 1, n){
        b[i] = bin[i-1] == '1';
    }
    int q, c, l, r;
    cin >> q;
    while(q--){
        cin >> c;
        if(c == 1){
            cin >> l >> r;
            rep(i, l, r){
                b[i]= !b[i];
            }
        } else {
            cin >> l;
            int a = 0;
            rep(i, 1, n){
                if(b[i] == l)
                    a ^= v[i];
            }
            cout << a << ' ';
        }
    }
    cout << '\n';
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