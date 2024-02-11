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
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define all(v) v.begin(), v.end()

bool isPrime(ll n){
    if(n == 2) return true;
    if(n < 2 || n%2 == 0) return false;

    for(ll i = 3; i*i <= n; i+=2)
        if(n%i == 0)
            return false;

    return true;
}

void solve(){
    ll n;
    cin >> n;
    cout << (isPrime(n) ? "YES" : "NO");
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