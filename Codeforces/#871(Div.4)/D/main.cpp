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

bool rec(int n, int m){
    if (n == m)
        return true;
    if(n%3)
        return false;
    return rec(n/3, m) || rec(2*n/3, m);
}

void solve(){
    int n, m;
    cin >> n >> m;
    if(rec(n, m))
        cout << "YES" << '\n';
    else
        cout << "NO" << "\n";
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