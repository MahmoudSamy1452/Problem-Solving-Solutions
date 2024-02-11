#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    long long n, k;
    cin >> n >> k;

    if (n >= k) {
        cout << (k-1) / 2;
        return;
    }

    if(k-n >= n || (k-1) / 2 > n){
        cout << 0;
        return;
    }
    cout << (n- (k-n) + 1)/2;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--){
        baroudy14();
    }
}
