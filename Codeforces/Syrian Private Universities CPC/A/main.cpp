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
    ll n, p, q;
    cin >> n >> p >> q;
    vector<ll> v(n);
    while(n--)
        cin >> v[n];
    sort(all(v));
    ll sum = 0, i = v.size()-1;
    while(p-- && v[i] > 0)
        sum+=v[i--];
    i = 0;
    while(q-- && v[i] < 0)
        sum-=v[i++];
    cout << sum << '\n';
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