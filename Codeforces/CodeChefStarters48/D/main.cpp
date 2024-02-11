#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, x = 0;
    cin >> n >> m;
    if(n%2)
        x+=m;
    if(m%2)
        x+=n;
    if(n%2 && m%2)
        x--;
    cout << x << endl;
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