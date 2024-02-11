#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(long long n){
    if(n <= 1) {
        cout << "NO";
        return;
    }
    for(int i = 2; i < n/2; i++){
        if(!(n%i)){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main() {
    fio;

    long long x, t = 1;
    //cin >> t;

    while(t--) {
        cin >> x;
        baroudy14(x);
    }
}