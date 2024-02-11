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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define sq(a) (a)*(a)

// a source, b aux, c dest
ll solve(ll i, vector<ll> v, ll a, ll b){
    if(i == v.size())
        return abs(a-b);
    return min(solve(i+1, v, a+v[i], b),solve(i+1, v, a, b+v[i]));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    int n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    while(t--)
        cout << solve(0, v, 0, 0);
}
