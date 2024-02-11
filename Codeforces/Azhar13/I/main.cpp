#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n;
    int max = INT_MIN;
    for(int i = 0; i < n;i++){
        cin >> x;
        if(x > max)
            max = x;
    }
    cout << max;
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