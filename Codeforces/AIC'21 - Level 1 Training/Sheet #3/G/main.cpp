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
    ll n, l, r;
    cin >> n;
    vector<int> v(n);
    rep(i,0, n-1)
        cin >> v[i];
    if(n%2){
        l = v.size()/2; r = l;
    } else {
        l = v.size()/2 -1; r = v.size()/2;
    }
    while(l > -1 && r < n){
        if(v[l] != v[r])
        {
            cout << "NO";
            return;
        }
        l--; r++;
    }
    cout << "YES";
    return;
}

int main(){
    //freopen("sets.in", "r",stdin);
    //freopen("output.txt","w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    //cin >> t;
    while(t--)
        solve();
}
