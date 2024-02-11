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
#define rep(i, a, b) for (ll i = a; i <= b; i++)
#define sq(a) (a)*(a)

vector<int> a(2e5,0), b(2e5,0), dp;

void solve(){
    int n, x, y, cnta = 0, cntb = 0;
    cin >> n;
    dp.resize(n);
    dp[0] = 0;
    unordered_set<int> sta, stb, st;
    vi ai(n), bi(n);
    rep(i, 0, n-1)
        cin >> ai[i] >> bi[i];
    rep(i, 0, n-1){
        x = ai[i]; y = bi[i];
        if((a[x] && b[x]) || (a[y] && b[y])) {
            cout << -1 << '\n';
            return;
        }
        if(a[x])
            cnta++;
        if (b[y])
            cntb++;
        if(a[x]+b[x] == 3 || a[y]+b[y] == 3) {
            cout << -1 << '\n';
            return;
        }
        st.insert(x); st.insert(y);
        sta.insert(x); stb.insert(y);
        a[x]++; b[y]++;
    }
    if((cnta-cntb > 0 && (st.size()-sta.size()) >= cnta-cntb) || (cntb-cnta > 0 && (st.size()-stb.size()) >= cntb-cnta) || cnta == cntb){
        cout << abs(cnta) << '\n';
        return;
    }
    cout << -1 << '\n';
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