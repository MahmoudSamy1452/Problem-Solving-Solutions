#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, c = 0;
    for (int i = 0; i < 3; i++){
        cin >> x;
        c+= x;
    }
    int m = 0;
    for (int i = 0; i < 3; i++){
        cin >> x;
        m+= x;
    }
    int s;
    cin >> s;
    if (c%5)
        c = c/5 +1;
    else c = c/5;
    if(m%10)
        m = m/10 +1;
    else m = m/10;
    if(c+m > s)
        cout << "NO";
    else cout << "YES";
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