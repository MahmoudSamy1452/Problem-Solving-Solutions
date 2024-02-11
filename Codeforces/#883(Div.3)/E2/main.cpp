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
    double x;
    double n;
    cin >> x;
    int l = 2, r = 1e5, mid;
    while(l < r){
        mid = l + (r-l)/2;
        n = log(1-x*(1-mid))/log(mid);
        if(((1-pow(mid,n))/(1-mid)) - x <= 1e-8) {
            if (round(n) >= 3) {
                cout << "YES" << '\n';
                return;
            }
        }
        if(((1-pow(mid,n))/(1-mid)) > x)
            r = mid-1;
        else
            l = mid + 1;
    }
    cout << "NO" << '\n';
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