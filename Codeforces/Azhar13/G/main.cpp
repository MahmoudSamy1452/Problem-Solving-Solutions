#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    for(int i =0; i < n; i++)
        if(i < n-1)
            cout << 1 << " ";
        else
            cout << k*2-(n-1) << endl;

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