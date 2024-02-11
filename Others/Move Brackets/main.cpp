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

bool sorting(pair<int,pair<int, int>> a, pair<int,pair<int, int>> b) {
    if(a.s.f > b.s.f)
        return true;
    else if (a.s.f < b.s.f)
        return false;
    if(a.s.s < b.s.s)
        return true;
    if(a.f == 0 && a.s.f == b.s.f && a.s.s == b.s.s)
        return true;
    return false;
}

void solve(){
    int n, m = 0, ans = 0;
    cin >> n;
    string str;
    cin >> str;
    for(char x : str){
        if(x == '(')
            m++;
        else m--;
        if(m < 0) {
            ans++;
            m++;
        }
    }
    cout << ans << '\n';
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