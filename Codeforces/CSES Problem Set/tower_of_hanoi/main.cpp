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

// a source, b aux, c dest
void solve(vector<pair<int, int>> &v, int n, int a, int b, int c){
    if(n == 1){
        v.pb(mp(a,c));
    }
    else
    {
        solve(v,n-1, a, c, b);
        v.pb(mp(a,c));
        solve(v, n-1, b, a, c);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1, n;
    cin >> n;
    vector<pair<int, int>> v;
    while(t--)
        solve(v, n, 1, 2, 3);
    cout << v.size() <<'\n';
    for(auto x : v){
        cout << x.f << " " << x.s << '\n';
    }
}
