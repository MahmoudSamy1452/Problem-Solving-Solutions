#include <bits/stdc++.h>
using namespace std;

void solve() {
    string w1, w2;
    cin >> w1 >> w2;
    if(w1 == w2)
        cout << -1;
    else cout << ((w1.length() > w2.length()) ? w1.length() : w2.length());

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