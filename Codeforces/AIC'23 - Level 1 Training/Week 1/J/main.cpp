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

void solve(){
    string s;
    cin >> s;
    vi p_a(s.size()+2,0), p_b(s.size()+2,0);
    rep(i, 1, s.size()+1){
        p_a[i] = p_a[i-1] + (i > s.size() ? 0 : (s[i-1]=='a'));
        p_b[i] = p_b[i-1] + (i > s.size() ? 0 : (s[i-1]=='b'));
    }
    int r = INT_MAX;
    rep(i, 0, s.size()+1){
        rep(j, i+1, s.size()+1){
             r = min(r, p_b[i] + (p_b[s.size()]-p_b[j-1]) + (p_a[j-1]-p_a[i]));
        }
    }
    cout << s.size() - r;
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