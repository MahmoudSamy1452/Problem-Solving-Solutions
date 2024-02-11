#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
    ll r, l, k;
    cin >> r >> l >> k;
    ll x;
    if(k%2)
        x = r*(k/2 + 1)-l*(k/2);
    else
        x = r*(k/2)-l*(k/2);
    cout << x << endl;
}

int main() {
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}