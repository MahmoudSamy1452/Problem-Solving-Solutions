#include <bits/stdc++.h>
#define ll long long
#define pi 3.14159265359
#define EPS = 1e-6
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0, l = 0, r = 0;
    ll sum = 0;
    while(r < n){
        sum+=a[r];
        while(sum > x)
        {
            sum -= a[l];
            l++;
        }
        ans += (sum == x);
        r++;
    }
    cout << ans;
}

int main() {
    fast

    int t = 1;
    //cin >> t;

    while(t--){
        solve();
    }
}
