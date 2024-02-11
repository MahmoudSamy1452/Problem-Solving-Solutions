#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n, k, l, r, acc = 0;
    cin >> n >> k;
    while(n--){
        cin >> l >> r;
        acc+=r-l+1;
    }
    if(acc%k)
        cout << k-(acc%k);
    else
        cout << 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--){
        baroudy14();
    }
}