#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int *ignore = new int[n];
    int c = 0, ans = 0;
    bool no;
    for (int i = 0; i < n; i++) {
        no = false;
        if (a[i] < 0) {
            ignore[c] = abs(a[i]);
            c++;
        } else {
            for (int j = 0; j < c; j++) {
                if (a[i] == ignore[j]) {
                    no = true;
                    break;
                }
            }
            if (!no && (i == (n - 1) || a[i] != a[i + 1]))
                ans++;
        }
    }
    cout << ans;
}

int main() {
    int t = 1;
    while(t--)
        solve();
    return 0;
}