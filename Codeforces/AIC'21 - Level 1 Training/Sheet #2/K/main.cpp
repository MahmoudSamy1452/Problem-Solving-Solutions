#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

bool is_prime(long long n){
    if(n <= 1) {
        return false;
    }
    for(int i = 2; i <= n/2; i++){
        if(!(n%i)){
            return false;
        }
    }
    return true;
}


void baroudy14(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(n%i == 0)
            cout << i << '\n';
    }
}

int main() {
    fio;

    long long t = 1;
    //cin >> t;

    while(t--) {
        baroudy14();
    }
}