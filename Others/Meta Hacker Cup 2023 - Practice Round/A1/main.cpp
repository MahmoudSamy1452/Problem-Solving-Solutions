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

int n = 1;
void solve(){
    int s, d, k;
    cin >> s >> d >> k;
    int buns = (s+d)*2, burgers_cheese = s+d*2;
    cout << "Case #" << n << ": ";
    if(buns >= k+1 && burgers_cheese >= k)
        cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main(){
    freopen("cheeseburger_corollary_1_input.txt", "r",stdin);
    freopen("cheeseburger_corollary_1_output.txt","w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(n <= t) {
        solve();
        n++;
    }
}