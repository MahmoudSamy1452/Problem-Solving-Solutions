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

bool great_er(int x, int y){
    return x>y;
}

void solve(){
    ll n, m, x, l = -1, r = 0, mid, ans;
    cin >> n >> m;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
        l = max(v[i], l);
        r += v[i];
    }
    ans = r;
    while(l <= r){
        mid = l + (r-l)/2;
        int groups = 1, sum = 0;
        for(int i = 0; i < n; i++){
            if(sum + v[i] > mid){
                groups++;
                sum = 0;
                i--;
            }else
                sum+=v[i];
        }
        if(groups <= m){
            ans = mid;
            r = mid-1;
        } else
            l = mid+1;

    }
    cout << ans;
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