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
    int n, x, v;
    cin >> n >> x;
    int e, o = 0;
    rep(i, 1, n) {
        cin >> v;
        o += v % 2;
    }
    e = n-o;
    if(!o){
        cout << "No" << '\n';
        return;
    }
    if(min(x-!(x%2),o-!(o%2))+e >= x)
        cout << "Yes" << '\n';
    else cout << "No" << '\n';
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