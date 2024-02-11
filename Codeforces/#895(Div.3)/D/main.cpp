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

si v;

void factors(int x){
    if(x == 2 || x == 3)
        v.insert(x);
    int i;
    for(i = 2; i*i < x; i++){
        if(x%i == 0){
            v.insert(i);
            v.insert(x/i);
        }
    }
    if(i*i == x)
        v.insert(i);
}

void solve(){
    ll n, x, y, s;
    cin >> n >> x >> y;
    s = x*y/__gcd(x,y);
    ll k = n/s;
    ll l = n - n/x + k, d = n/y - k;
    cout << n*(n+1)/2 - l*(l+1)/2 - d*(d+1)/2 << '\n';
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