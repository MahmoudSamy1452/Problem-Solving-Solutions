#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1)
        return false;
    bool prime = true;
    for(int i = 2; i <= n/2; i++){
        if(!(n%i))
            return false;
    }
    return true;
}

void baroudy14(){
    unsigned long long l, r;
    cin >> l >> r;
    while(l < r && l%2)
        l++;
    if(r-l < 2)
        cout << -1;
    else
        cout << l << " " << l+1 << " " << l+2;
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