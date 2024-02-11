#include <bits/stdc++.h>
using namespace std;

void Baroudy14(){
    unsigned long long n, k, x;
    cin >> n >> k;

    x = n/2 + n%2;

    if(k > x)
    {
        k -= x;
        cout << 2*k;
    } else
        cout << 1 + 2*(k-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        Baroudy14();
    }
}