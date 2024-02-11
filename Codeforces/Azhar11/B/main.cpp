#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int *a = new int[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    sort(a, a + m);
    if (a[0] == 1 || a[m - 1] == n){
        cout << "NO";
        return;
    }
    for (int i = 1; i < m-2; i++) {
        if (a[i] == a[i + 1] - 1 && a[i + 1] == a[i + 2] -1)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }
}