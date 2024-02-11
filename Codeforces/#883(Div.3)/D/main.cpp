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
    double n, d, h, prev = INT_MIN, y, ans = 0;
    cin >> n >> d >> h;
    while(n--){
        cin >> y;
        ans += d*h*0.5;
        if(y - prev < h){
            double overlapy = h-(y-prev);
            ans -= overlapy*d*(overlapy/h)*0.5;
        }
        prev = y;
    }
    cout << fixed << setprecision(8) << ans << '\n';
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