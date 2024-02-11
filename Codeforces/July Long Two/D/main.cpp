#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, n;
    cin >> a >> b >> n;
    if(a > b && a%b == 0 || b <=a && b%a == 0){
        cout << -1 << "\n";
        return;
    }
    int x;
    if(n%a)
        x = n+(a-n%a);
    else x = n;
    bool found = false;
    while(!found){
        if(x%b)
            found = true;
        else x += a;
    }
    cout << x << "\n";
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