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
    int n, d, s;
    cin >> n;
    vi v(201, 0);
    rep(i, 0, n-1){
        cin >> d >> s;
        v[d] = v[d] ? min(s, v[d]) : s;
    }
    double furthest = DBL_MAX;
    rep(i, 1, 200){
        if(v[i] == 0)
            continue;
        furthest = min(i - 1 + ceil(v[i]/2.0), furthest);
    }
    cout << furthest << '\n';
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