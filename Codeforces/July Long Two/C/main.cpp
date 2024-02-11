#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, n, r;
    cin >> x >> y >> n >> r;
    if (r / x < n)  {
        cout << -1 << "\n";
        return;
    }
    int a = (r-x*n)/(y-x);
    if(a > n)
        a = n;
    cout << n-a << " " << a << "\n";
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