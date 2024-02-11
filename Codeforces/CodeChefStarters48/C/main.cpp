#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    int money = k*x;
    if(x > y)
        money += (n-k)*y;
    else money += (n-k)*x;
    cout << money << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}