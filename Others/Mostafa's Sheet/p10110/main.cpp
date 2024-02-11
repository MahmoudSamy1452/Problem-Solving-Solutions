#include <bits/stdc++.h>
using namespace std;

void solve(){
    unsigned int x, sq;
    cin >> x;
    while(x){
        sq = (int)sqrt(x);
        if(sq * sq == x)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
        cin >> x;
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