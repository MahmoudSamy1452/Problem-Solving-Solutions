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
    int c, n, on, off, cur=0, lastOn;
    bool flag = false;
    cin >> c >> n;
    while(n--){
        cin >> on >> off;
        cur-=off;
        if(cur < 0) {
            flag=true;
        }
        cur+=on;
        if(cur > c || cur < 0) {
            flag=true;
        }
        lastOn = on;
    }
    if(cur != 0 || lastOn != 0) {
        flag=true;
    }
    if(flag)
        cout << "YES" << "\n";
    else
        cout << "NO" << '\n';
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