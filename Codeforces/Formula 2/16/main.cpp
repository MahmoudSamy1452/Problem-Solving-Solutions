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
    int n, r;
    cin >> n >> r;
    vi v(n);
    rep(i, 0, n-1){
        cin >> v[i];
    }
    int last = -r; bool found; int count = 0;
    while(last < n - r){
        found = false;
        for(int i = min(last + 2*r -1, n-1) ; i < n && i > max(last,-1); i--)
            if(v[i]) {
                last = i; count++;
                found = true;
                break;
            }
        if(!found) {
            cout << -1;
            return;
        }
    }
    cout << count;
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