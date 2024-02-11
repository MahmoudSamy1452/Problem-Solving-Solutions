#include <bits/stdc++.h>
#define ll long long
#define pi 3.14159265359
#define EPS = 1e-6
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve(){
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0, l = 0, r = 0, sum = 0;
    while(r < n){
        sum+=a[r];
        while(sum > t){
            sum -= a[l];
            l++;
        }
        ans = max(ans, r-l+1);
        r++;
    }
    cout << ans << '\n';
}

int main() {
    fast

    int t = 1;
    //cin >> t;

    while(t--){
        solve();
    }
}
