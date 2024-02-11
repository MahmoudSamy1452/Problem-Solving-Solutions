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
    int n, m, x;
    cin >> n >> m;
    multiset<int> h;
    vector<int> t(m);
 
    for(int i = 0; i < n; i++) {
        cin >> x;
        h.insert(x);
    }
 
    for(int i = 0; i < m; i++)
        cin >> t[i];
 
 
    for(int x : t){
        auto it = h.upper_bound(x);
        if(it == h.begin())
            cout << -1 << '\n';
        else{
            cout << *(--it) << '\n';
            h.erase(it);
        }
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
}