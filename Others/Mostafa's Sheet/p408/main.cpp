#include <bits/stdc++.h>
using namespace std;

void solve(){
    int step, mod, x = 0;
    while(cin >> step >> mod) {
        int a[mod]; bool bad = false;
        memset(a, 0, sizeof(int) * mod);
        do {
            a[x]++;
            x = (x + step) % mod;
        } while (a[x] == 0);
        for (auto &i: a)
            if (i == 0) {
                bad = true;
                break;
            }
        if(!bad)
            cout << setw(10) << step << setw(10) << mod << "    " << "Good Choice\n\n" << flush;
        else cout << setw(10) << step << setw(10) << mod << "    " << "Bad Choice\n\n" << flush;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

    return 0;
}