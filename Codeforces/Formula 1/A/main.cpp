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
    int n, k, x;
    cin >> n >> k;
    vi v;
    mi skip;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(v.empty() || x != v.back())
            v.push_back(x);
    }
    skip[v[0]]++;
    skip[v.back()]++;
    for(int i = 0; i < v.size()-2; i++){
        skip[v[i+1]] += (v[i]==v[i+2])*2 + (v[i]!=v[i+2]);
    }
    int mx = -1, g;
    for(auto [key, value] : skip){
        if(value > mx) {
            g = key;
            mx = value;
        }
    }
    cout << g;
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