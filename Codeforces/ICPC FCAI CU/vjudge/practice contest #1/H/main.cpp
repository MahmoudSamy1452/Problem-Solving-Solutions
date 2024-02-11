#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x){
    if(x <= 1)
        return false;
    for(int i = 2; i <= x/2; i++){
        if(!(x%i))
            return false;
    }
    return true;
}

void baroudy14(){
    int n;
    cin >> n;
    if(n > 2 && is_prime(n-2)) {
        cout << 2 << " " << n-2;
        return;
    }
    cout << -1;
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