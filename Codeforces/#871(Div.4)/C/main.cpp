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
    ll n, m1 = INT_MAX, m2 = INT_MAX, m12 = INT_MAX, minutes;
    string s;
    cin >> n;
    while(n--) {
        cin >> minutes  >> s;
        if(s == "01")
            m1 = min(m1, minutes);
        else if(s == "10")
            m2 = min(m2, minutes);
        else if (s == "11")
            m12 = min(m12, minutes);
    }
    if((m1 == INT_MAX || m2 == INT_MAX) && m12 == INT_MAX)
        cout << -1 << '\n';
    else cout << min(m12, m1+m2) << '\n';
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