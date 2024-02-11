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
    ll a, b, c;
    cin >> a >> b;
    c = a+b;
    string sa, sb, sc;
    sa = to_string(a); sb = to_string(b); sc = to_string(c);
    auto ita = std::remove(sa.begin(), sa.end(),'0');
    auto itb = std::remove(sb.begin(), sb.end(),'0');
    auto itc = std::remove(sc.begin(), sc.end(),'0');
    a = stoi(sa.substr(0,ita-sa.begin())); b = stoi(sb.substr(0,itb-sb.begin())); c = stoi(sc.substr(0,itc-sc.begin()));
    if(a+b == c)
        cout << "YES";
    else
        cout << "NO";
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
