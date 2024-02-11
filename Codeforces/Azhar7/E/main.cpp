#include <bits/stdc++.h>
using namespace std;

void solve() {
    int L, v, l, r;
    cin >> L >> v >> l >> r;
    int ans = L/v - (r-(l-(l%v)))/v;
    if(l%v == 0)
        ans--;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
}