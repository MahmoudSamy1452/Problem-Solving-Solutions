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

vector<string> res;

vector<string> rec(int n){
    vector<string> res;
    if(n == 1){
        res.pb("0");
        res.pb("1");
        return res;
    }
    vector<string> pres = rec(n-1);
    for(auto x : pres){
        res.pb(x+"0");
    }
    for(int i = pres.size()-1; i >= 0; i--){
        res.pb(pres[i]+"1");
    }
    return res;
}

void solve(){
    int n;
    cin >> n;
    vector<string> ans = rec(n);
    for(auto x: ans)
        cout << x << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
}