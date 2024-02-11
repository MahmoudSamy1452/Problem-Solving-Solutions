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
    int n, x, m = INT_MIN, o = 0, e = 0;
    cin >> n;
    map<int, int> f;
    vi v(n+1, 0);
    for(int j = 0; j < n; j++){
        cin >> x;
        f[x]++;
    }
    for(auto z : f){
        for(int i = z.first; i <= n; i+=z.first){
            v[i]+=z.second;
            m = max(m, v[i]);
        }
    }
    if(m == INT_MIN)
        cout << 0 << '\n';
    else
        cout << m << "\n";
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