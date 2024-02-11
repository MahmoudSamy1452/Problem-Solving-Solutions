#include <bits/stdc++.h>
using namespace std;

void solve() {
    int c;
    cin >> c;
    int* n = new int[c];
    for(int i = 0; i < c; i++){
        cin >> n[i];
    }
    int* t = new int[c];
    for(int i = 0; i < c; i++) {
        int s = 0;
        for (int j = 0; j < n[i]; j++) {
            int x;
            cin >> x;
            s += x;
        }
        t[i] = s*5+n[i]*15;
    }
    cout << *(min_element(t,t+c));
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