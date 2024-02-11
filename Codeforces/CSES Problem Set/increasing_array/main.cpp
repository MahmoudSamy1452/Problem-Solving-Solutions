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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define sq(a) (a)*(a)

void solve(){
    ll n, m, x, moves = 0;
    cin >> n;
    cin >> x;
    m = x;
    while(--n){
        cin >> x;
        if(x < m)
            moves += m-x;
        m = max(m, x);
    }
    cout << moves;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
}