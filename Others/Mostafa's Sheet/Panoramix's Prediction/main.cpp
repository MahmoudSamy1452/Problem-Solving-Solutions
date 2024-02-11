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
    int n, m;
    cin >> n >> m;
    int next_prime = -1;
    for(int i = n+1; i < m+1; i++){
        if(isPrime(i))
        {
            next_prime = i;
            break;
        }
    }
    if(next_prime == m)
        cout << "YES";
    else cout << "NO";
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