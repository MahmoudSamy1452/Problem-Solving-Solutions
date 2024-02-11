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
    int n, b, e = 0, o = 0, cnt = 0, sum = 0;
    cin >> n >> b;
    vector<int> v(n);
    vector<int> c;

    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0 ; i < n-1; i++){
        if(v[i]%2)
            o++;
        else
            e++;
        if(e == o)
            c.pb(abs(v[i+1]-v[i]));
    }
    sort(c.begin(), c.end());
    for(int i = 0; i < c.size(); i++){
        sum += c[i];
        if(sum <= b)
            cnt++;
        else break;
    }
    cout << cnt;
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
