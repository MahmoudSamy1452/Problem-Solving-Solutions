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
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define all(v) v.begin(), v.end()

void solve(){
    ll n, mx;
    ll x, temp, cnt = 0;
    cin >> n >> x;
    string str = to_string(x);
    if(str.length() == n) {
        cout << 0;
        return;
    }
    else if (str.length() > n) {
        cout << -1;
        return;
    }
    while(str.length() != n){
        mx = 0;
        temp = x;
        while(temp){
            mx = max(mx, (temp%10));
            temp /= 10;
        }
        if(mx <= 1)
        {
            cout << -1;
            return;
        } else x *= mx;
        str = to_string(x);
        cnt++;
    }
    cout << cnt;
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